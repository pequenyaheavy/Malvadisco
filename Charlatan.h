/* 
 * File:   Chalatan.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:10
 */

#ifndef CHALATAN_H
#define	CHALATAN_H

#include "NPC.h"

class Charlatan : public NPC {
public:
    Charlatan(sf::Texture *texture, int x, int y);
    //Charlatan(const Charlatan& orig);
    virtual ~Charlatan();
    virtual void update();
    virtual void render();
private:

};

#endif	/* CHALATAN_H */

