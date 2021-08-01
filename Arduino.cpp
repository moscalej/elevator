//
// Created by amoscoso on 8/1/2021.
//

#include "Arduino.h"


/**
 * Tiene que revisar que comandoes voy a correr
 * @return
 */
Command Arduino::check_buttons() {
    Command comando;
    comando.command = 0;

    return comando;
}

/**
 * Le digo al ardunio que no me importa como lo hagas
 * llevame del piso que te digo al piso que te digo
 * @param from_floor
 * @param to_floor
 * @return
 */
int Arduino::move_to_floor(int from_floor, int to_floor) {

    return 0;
}

/**
 * Aca es cuando usas el arduino para ver si alguna puerta esta
 * abierta o cerrada.
 * @return 1 si la puerta esta abierta
 *          0 si la puerta esta cerrada
 */
int Arduino::get_door_status() {
    return 0;
}

int Arduino::get_errors() {
    return 0;
}

int Arduino::bring_up() {
    return 0;
}
