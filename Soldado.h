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
    Soldado();
    Soldado(const Soldado& orig);
    virtual ~Soldado();
private:

};

#endif	/* RUTA_H */

