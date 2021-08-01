
#include "ElevatorClass.h"
#include "StateMachine.h"
#include "GlobalState.h"

#define FIRMWARE_VERSION 10001

int main() {


    ElevatorClass  elevatorStates;
    GlobalState  globalState;
    // some code  before the init
    while (globalState.fatalError){
        while (globalState.errors){
            run_state_machine(&elevatorStates, &globalState);
        }
        run_resolve_error(&elevatorStates, &globalState);

    }
    return 0;
}
