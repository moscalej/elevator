//
// Created by amoscoso on 8/1/2021.
//

#include "StateMachine.h"

int run_state_machine(ElevatorClass *elevator, GlobalState *globalState) {
    int door;
    int command;

    switch (globalState->get_state()) {
        case BRING_UP:
            elevator->bring_up();
            globalState->update_state(STAND_BY_CLOSE_DOOR);
            break;

        case RESET:
            elevator->reset();
            globalState->update_state(BRING_UP);
            break;

        case STAND_BY_CLOSE_DOOR:
            door = elevator->get_door_status();
            command = elevator->get_command();
            if (door == OPEN) {
                globalState->update_state(STAND_BY_OPEN_DOOR);
            } else {
                if (command != NO_COMMAND) {
                    globalState->update_state(EXECUTING_COMMAND);

                }
            }

            break;
        case STAND_BY_OPEN_DOOR:
            command = elevator->get_command();
            if (elevator->get_door_status() == CLOSE) {
                globalState->update_state(STAND_BY_CLOSE_DOOR);

            }
            break;

        case EXECUTING_COMMAND:
            globalState->update_state(MOVING);
            elevator->run_command();
            globalState->update_state(STAND_BY_CLOSE_DOOR);
            break;

    }

    if (elevator->get_erros() == NO_ERROR) {
        globalState->errors = elevator->get_erros();
        return -1;
    }
    return 0;
}