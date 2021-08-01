//
// Created by amoscoso on 8/1/2021.
//

#ifndef UNTITLED4_GLOBALSTATE_H
#define UNTITLED4_GLOBALSTATE_H


enum States{
    BRING_UP = 0,
    RESET= 1,
    STAND_BY_CLOSE_DOOR,
    STAND_BY_OPEN_DOOR,
    FETCHING_COMMAND,
    EXECUTING_COMMAND,
    MOVING,
    };


class GlobalState{
public:
    int  current_state = BRING_UP;
    int last_state = RESET;
    bool fatalError;
    int errors;

    int update_state(int states);
    int get_state() const;
};

#endif //UNTITLED4_GLOBALSTATE_H
