/* 
 * File:   Enemigo.cpp
 * Author: Juan
 * 
 * Created on 14 de abril de 2015, 20:08
 */

#include "Enemigo.h"

Enemigo::Enemigo(sf::Texture *texture, int x, int y) : NPC(texture, x, y) {
    
}

Enemigo::Enemigo(const Enemigo& orig) {
}

Enemigo::~Enemigo() {
}

Enemigo::update() {
    /*calcular nueva posicion en new y antigua guardarla en old cada X segundos*/
}

Enemigo::render() {
    /*calcular nueva posicion en new y antigua guardarla en old cada X segundos*/
}


// GETTERS AND SETTERS

Enemigo::getOldX() {
    return this->oldX;
}

Enemigo::getOldY() {
    return this->oldY;
}

Enemigo::setOldX(int x) {
    this->oldX=x;
}

Enemigo::setOldY(int y) {
    this->oldY=y;
}

Enemigo::getNewX() {
    return this->newX;
}

Enemigo::getNewY() {
    return this->newY;
}

Enemigo::setNewX(int x) {
    this->newX=x;
}

Enemigo::setNewY(int y) {
    this->newY=y;
}
