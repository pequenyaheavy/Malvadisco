/* 
 * File:   Ruta.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:09
 */

#ifndef RUTA_H
#define	RUTA_H

#include "Enemigo.h"

class Soldado : public Enemigo {
public:
    Soldado(sf::Texture *texture, int x, int y);
    //Soldado(const Soldado& orig);
    virtual ~Soldado();
    void update();
    void render();
private:

};

#endif	/* RUTA_H */

