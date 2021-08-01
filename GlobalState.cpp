//
// Created by amoscoso on 8/1/2021.
//

#include "GlobalState.h"

int GlobalState::update_state(int state) {
    this->current_state = state;
    return 0;

}

int GlobalState::get_state() const {
    return this->current_state;
}