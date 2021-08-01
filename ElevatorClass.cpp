//
// Created by amoscoso on 8/1/2021.
//

#include "ElevatorClass.h"


int ElevatorClass::bring_up() {
    return 0;
}

void ElevatorClass::reset() {

}

int ElevatorClass::get_door_status() {
    int status;
    status = this->arduino.get_door_status();
    this->is_door_open = (status ==1 ) ? OPEN : CLOSE;
    return this->is_door_open;
}

int ElevatorClass::get_command() {
    if (!this->command_on_que){
        this->command_to_run = this->arduino.check_botons();
        if (this->command_to_run != NO_COMMAND){
            this->command_on_que = true;
        }
    }

    return this->command_to_run;
}

void ElevatorClass::run_command() {

    switch (this->command_to_run) {
        case (MOVE_TO_0):
            this->arduino.move_to_floor(this->current_floor, 0);
            this->current_floor = 0;
            break;

        case (MOVE_TO_1):
            this->arduino.move_to_floor(this->current_floor, 1);
            this->current_floor = 1;
            break;

        case (MOVE_TO_2):
            this->arduino.move_to_floor(this->current_floor, 2);
            this->current_floor = 2;
            break;

        case (MOVE_TO_3):
            this->arduino.move_to_floor(this->current_floor, 3);
            this->current_floor = 3;
            break;

        case (MOVE_TO_4):
            this->arduino.move_to_floor(this->current_floor, 4);
            this->current_floor = 4;
            break;

        case (MOVE_TO_5):
            this->arduino.move_to_floor(this->current_floor, 5);
            this->current_floor = 5;
            break;

        case (MOVE_TO_6):
            this->arduino.move_to_floor(this->current_floor, 6);
            this->current_floor = 6;
            break;

        case (MOVE_TO_7):
            this->arduino.move_to_floor(this->current_floor, 7);
            this->current_floor = 7;
            break;

        default:
            break;

    }
    this->errors = this->arduino.get_errors();

    //code here

    this->command_to_run = NO_COMMAND;
    this->command_on_que = false;

}

int ElevatorClass::get_erros() {
    return this->errors;
}
