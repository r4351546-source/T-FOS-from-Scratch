#include "tools/include/teeps.hpp"

void teeps::modeswitcher() {
    while(editing){
    switch (EditMode) {
        case mode::insert:
            modeinsert();
            break;
            
        case mode::command:
            modecommand();
            break;
    }
    }
}
