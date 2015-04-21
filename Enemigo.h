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
    //Enemigo(const Enemigo& orig);
    virtual ~Enemigo();
    virtual void update();
    virtual void render();
    int getOldX();
    int getOldY();
    int getNewX();
    int getNewY();
    void setOldX(int x);
    void setOldY(int y);
    void setNewX(int x);
    void setNewY(int y);
private:
    /*variables de posicion para bucle interpolado*/
    int oldX, oldY;
    int newX, newY;
};

#endif	/* ENEMIGO_H */

