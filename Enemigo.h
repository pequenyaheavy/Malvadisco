/* 
 * File:   Enemigo.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:08
 */

#ifndef ENEMIGO_H
#define	ENEMIGO_H

#include "NPC.h"

class Enemigo : public NPC {
public:
    Enemigo(sf::Texture *texture, int x, int y);
    Enemigo(const Enemigo& orig);
    virtual ~Enemigo();
    virtual void update() const;
    /*interpolar x, y desde old a new*/
    virtual void render() const;
    int getOldX();
    int getOldY();
    int setOldX();
    int setOldY();
    int getNewX();
    int getNewY();
    int setNewX();
    int setNewY();
private:
    /*variables de posicion para bucle interpolado*/
    int oldX, oldY;
    int newX, newY;
};

#endif	/* ENEMIGO_H */

