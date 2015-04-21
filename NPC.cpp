/* 
 * File:   NPC.cpp
 * Author: Juan
 * 
 * Created on 14 de abril de 2015, 20:08
 */

#include "NPC.h"

NPC::NPC(sf::Texture texture, int x, int y) {
    this->sprite = new sf::Sprite(texture);
    this->setX(x);
    this->setY(y);
}

NPC::NPC(const NPC& orig) {
}

NPC::~NPC() {
}

NPC::getX() {
    return this->x;
}

NPC::getY() {
    return this->y;
}

NPC::getState() {
    return this->state;
}

NPC::setX(int x) {
    this->sprite.setPosition(x,y);
    this->x=x;
}

NPC::setY(int y) {
    this->sprite.setPosition(x,y);
    this->x=y;
}

NPC::setState(int state) {
    this->state=state;
}

