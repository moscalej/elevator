//
// Created by amoscoso on 8/1/2021.
//

#ifndef UNTITLED4_ARDUINO_H
#define UNTITLED4_ARDUINO_H


class Arduino {
public:
    int get_door_status();

    int check_botons();

    int move_to_floor(int from_floor, int to_floor);

    int get_errors();
};


#endif //UNTITLED4_ARDUINO_H
