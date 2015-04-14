/* 
 * File:   Espada.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:19
 */

#ifndef ESPADA_H
#define	ESPADA_H

#include "Proyectil.h"

class Espada : public Proyectil {
public:
    Espada();
    Espada(const Espada& orig);
    virtual ~Espada();
private:

};

#endif	/* ESPADA_H */

