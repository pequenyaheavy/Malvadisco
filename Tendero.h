/* 
 * File:   Tendero.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:10
 */

#ifndef TENDERO_H
#define	TENDERO_H

#include "Charlatan.h"

class Tendero : public Charlatan {
public:
    Tendero(sf::Texture *texture, int x, int y);
    //Tendero(const Tendero& orig);
    virtual ~Tendero();
    void update();
    void render();
private:

};

#endif	/* TENDERO_H */

