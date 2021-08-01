//
// Created by amoscoso on 8/1/2021.
//

#include "ElevatorClass.h"


int ElevatorClass::bring_up() {

    return this->arduino.bring_up();
}

void ElevatorClass::reset() {

}

int ElevatorClass::get_door_status() {
    int status;
    status = this->arduino.get_door_status();
    this->is_door_open = (status == 1 ) ? OPEN : CLOSE;
    return this->is_door_open;
}

int ElevatorClass::get_command() {
    if (!this->commando_en_espera){
        this->command_to_run = this->arduino.check_buttons();
        if (this->command_to_run.command != NO_COMMAND){
            this->commando_en_espera = true;
        }
    }

    return this->command_to_run.command;
}

void ElevatorClass::run_command() {

    switch (this->command_to_run.command) {
        case (MOVE):
            this->arduino.move_to_floor(this->current_floor, this->command_to_run.arguments);
            this->current_floor = command_to_run.arguments;
            break;


        default:
            break;

    }
    this->errors = this->arduino.get_errors();

    //code here

    this->command_to_run.command = NO_COMMAND;
    this->commando_en_espera = false;

}

int ElevatorClass::get_erros() {
    return this->errors;
}
