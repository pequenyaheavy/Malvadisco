/* 
 * File:   Flecha.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:16
 */

#ifndef FLECHA_H
#define	FLECHA_H

#include "Proyectil.h"

class Flecha : public Proyectil {
public:
    Flecha();
    Flecha(const Flecha& orig);
    virtual ~Flecha();
private:

};

#endif	/* FLECHA_H */

