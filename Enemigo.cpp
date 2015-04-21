/* 
 * File:   Enemigo.cpp
 * Author: Juan
 * 
 * Created on 14 de abril de 2015, 20:08
 */

#include "Enemigo.h"

Enemigo::Enemigo(sf::Texture *texture, int x, int y) : NPC(texture, x, y) {
    
}

//Enemigo::Enemigo(const Enemigo& orig) {}

Enemigo::~Enemigo() {
}

void Enemigo::update() {
    /*calcular nueva posicion en new y antigua guardarla en old cada X segundos*/
}

void Enemigo::render() {
    /*calcular nueva posicion en new y antigua guardarla en old cada X segundos*/
}


// GETTERS AND SETTERS

int Enemigo::getOldX() {
    return this->oldX;
}

int Enemigo::getOldY() {
    return this->oldY;
}

void Enemigo::setOldX(int x) {
    this->oldX=x;
}

void Enemigo::setOldY(int y) {
    this->oldY=y;
}

int Enemigo::getNewX() {
    return this->newX;
}

int Enemigo::getNewY() {
    return this->newY;
}

void Enemigo::setNewX(int x) {
    this->newX=x;
}

void Enemigo::setNewY(int y) {
    this->newY=y;
}
