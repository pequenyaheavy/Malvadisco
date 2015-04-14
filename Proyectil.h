/* 
 * File:   Proyectil.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:16
 */

#ifndef PROYECTIL_H
#define	PROYECTIL_H

#include "Objeto.h"

class Proyectil : public Objeto {
public:
    Proyectil();
    Proyectil(const Proyectil& orig);
    virtual ~Proyectil();
private:

};

#endif	/* PROYECTIL_H */

