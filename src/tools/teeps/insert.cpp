
#include "tools/include/teeps.hpp"

#include <algorithm>
#include <iostream>
#include <string>

#include <termios.h>
#include <unistd.h>

char teeps::getkey() {
    termios oldTerm{};
    termios raw{};

    tcgetattr(STDIN_FILENO, &oldTerm);
    raw = oldTerm;

    raw.c_lflag &= ~(ICANON | ECHO);
    raw.c_cc[VMIN] = 1;
    raw.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSANOW, &raw);

    char key = 0;
    if (read(STDIN_FILENO, &key, 1) != 1) {
        tcsetattr(STDIN_FILENO, TCSANOW, &oldTerm);
        return 0;
    }

    // Arrow keys: ESC [ A/B/C/D
    if (key == '\033') {
        char seq[2]{};

        if (read(STDIN_FILENO, &seq[0], 1) == 1 &&
            read(STDIN_FILENO, &seq[1], 1) == 1 &&
            seq[0] == '[') {

            switch (seq[1]) {
                case 'A': key = 1; break; // Up
                case 'B': key = 2; break; // Down
                case 'C': key = 3; break; // Right
                case 'D': key = 4; break; // Left
                default:  key = '\033'; break;
            }
        }
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldTerm);
    return key;
}

void teeps::modeinsert() {
    if (lines.empty()) {
        lines.emplace_back();
    }

    while (editing && EditMode == mode::insert) {
        currentLine = std::min(currentLine, lines.size() - 1);
        cursorPosition = std::min(
            cursorPosition,
            lines[currentLine].size()
        );

        // keep the cursor inside the visible viewport
        if (currentLine < scrollOffset) {
            scrollOffset = currentLine;
        }

        if (currentLine >= scrollOffset + visibleLines) {
            scrollOffset = currentLine - visibleLines + 1;
        }

        // rdraw editor
        std::cout << "\033[2J\033[H";

        for (size_t i = 0; i < visibleLines; ++i) {
            size_t index = scrollOffset + i;

            if (index < lines.size()) {
                std::cout << lines[index];
            }

            std::cout << "\033[K\n";
        }

        std::cout << "\033[K"
                  << "-- INSERT --  " << name
                  << " | Line " << currentLine + 1
                  << " | ESC: command"
                  << std::flush;

        // position the terminal cursor
        std::cout << "\033["
                  << (currentLine - scrollOffset + 1)
                  << ";"
                  << (cursorPosition + 1)
                  << "H"
                  << std::flush;

        char key = getkey();

        if (key == 0) {
            editing = false;
            break;
        }

        if (key == '\033') {
            EditMode = mode::command;
            continue;
        }

        // enter split the current line
        if (key == '\n' || key == '\r') {
            std::string remainder =
                lines[currentLine].substr(cursorPosition);

            lines[currentLine].erase(cursorPosition);
            lines.insert(
                lines.begin() + currentLine + 1,
                remainder
            );

            ++currentLine;
            cursorPosition = 0;
            continue;
        }

        // backspace remov
        if (key == 127 || key == 8) {
            if (cursorPosition > 0) {
                lines[currentLine].erase(cursorPosition - 1, 1);
                --cursorPosition;
            }
            else if (currentLine > 0) {
                cursorPosition = lines[currentLine - 1].size();

                lines[currentLine - 1] += lines[currentLine];
                lines.erase(lines.begin() + currentLine);

                --currentLine;
            }

            continue;
        }

        // Arrow keys.
        if (key == 1) { // Up
            if (currentLine > 0) {
                --currentLine;
                cursorPosition = std::min(
                    cursorPosition,
                    lines[currentLine].size()
                );
            }
            continue;
        }

        if (key == 2) { // Down
            if (currentLine + 1 < lines.size()) {
                ++currentLine;
                cursorPosition = std::min(
                    cursorPosition,
                    lines[currentLine].size()
                );
            }
            continue;
        }

        if (key == 3) { // Right
            if (cursorPosition < lines[currentLine].size()) {
                ++cursorPosition;
            }
            else if (currentLine + 1 < lines.size()) {
                ++currentLine;
                cursorPosition = 0;
            }
            continue;
        }

        if (key == 4) { // Left
            if (cursorPosition > 0) {
                --cursorPosition;
            }
            else if (currentLine > 0) {
                --currentLine;
                cursorPosition = lines[currentLine].size();
            }
            continue;
        }

        // Ctrl-D and other control characters aren't inserted.
        if (key < 32 || key == 127) {
            continue;
        }

        // Insert the character at the cursor.
        lines[currentLine].insert(cursorPosition, 1, key);
        ++cursorPosition;
    }
}
