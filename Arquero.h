/* 
 * File:   Arquero.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:08
 */

#ifndef ARQUERO_H
#define	ARQUERO_H

#include "Enemigo.h"

class Arquero : public Enemigo {
public:
    Arquero(sf::Texture *texture, int x, int y);
    //Arquero(const Arquero& orig);
    virtual ~Arquero();
    void update();
    void render();
private:
};

#endif	/* ARQUERO_H */

