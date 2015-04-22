/* 
 * File:   Arquero.h
 * Author: Juan
 *
 * Created on 22 de abril de 2015, 19:37
 */

#ifndef ARQUERO_H
#define	ARQUERO_H

#include "Enemigo.h"

class Arquero : public Enemigo {
public:
    Arquero(sf::Texture *texture, int x, int y);
    //Arquero(const Arquero& orig);
    virtual ~Arquero();
    virtual void update();
    virtual void render();
private:
};

#endif	/* ARQUERO_H */

