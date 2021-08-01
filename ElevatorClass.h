//
// Created by amoscoso on 8/1/2021.
//

#ifndef UNTITLED4_ELEVATORCLASS_H
#define UNTITLED4_ELEVATORCLASS_H
#include "Arduino.h"
enum DoorStatus{
    OPEN =1,
    CLOSE = 0
};

enum Commands{
    NO_COMMAND,
    MOVE_TO_0,
    MOVE_TO_1,
    MOVE_TO_2,
    MOVE_TO_3,
    MOVE_TO_4,
    MOVE_TO_5,
    MOVE_TO_6,
    MOVE_TO_7,
};

class ElevatorClass {

public:
    int current_floor = 0;
    bool running = false;
    int direction = 1 ; // one is going up 2 is going down
    int destination_floor = 0 ;
    bool is_door_open = true;
    int update_elevator_state(int elevatorState);
    int bring_up();
    void reset();


    int get_door_status();

    int get_command();

    void run_command();

    int get_erros();

private:
    Arduino arduino ;
    int errors;
    bool command_on_que;
    int command_to_run;
};

enum Errors{
    NO_ERROR,

};




#endif //UNTITLED4_ELEVATORCLASS_H
