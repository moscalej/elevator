
#include "ElevatorClass.h"
#include "StateMachine.h"
#include "GlobalState.h"

#define FIRMWARE_VERSION 10001

int main() {


    ElevatorClass  elevator; //EStado elevador
    GlobalState  globalState; // Estado GlobaL
    globalState.firmware_version = FIRMWARE_VERSION;
    // some code  before the init

    while (globalState.fatalError){
        while (globalState.errors){
            run_state_machine(&elevator, &globalState);
        }
        run_resolve_error(&elevator, &globalState);

    }
    return 0;
}
