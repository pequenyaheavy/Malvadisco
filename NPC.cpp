/* 
 * File:   NPC.cpp
 * Author: Juan
 * 
 * Created on 14 de abril de 2015, 20:08
 */

#include "NPC.h"

NPC::NPC(sf::Texture *texture, int x, int y) {
    this->sprite = new sf::Sprite(*texture);
    this->setX(x);
    this->setY(y);
}

//NPC::NPC(const NPC& orig) {}

NPC::~NPC() {
}

void NPC::update() {
}

void NPC::render() {
}

int NPC::getX() {
    return this->x;
}

int NPC::getY() {
    return this->y;
}

sf::Sprite NPC::draw() {
    return *(this->sprite);
}

int NPC::getState() {
    return this->state;
}

void NPC::setX(int x) {
    this->sprite->setPosition(x,y);
    this->x=x;
}

void NPC::setY(int y) {
    this->sprite->setPosition(x,y);
    this->x=y;
}

void NPC::setState(int state) {
    this->state=state;
}

