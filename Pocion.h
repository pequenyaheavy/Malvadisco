/* 
 * File:   Pocion.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:19
 */

#ifndef POCION_H
#define	POCION_H

#include "Objeto.h"

class Pocion : public Objeto {
public:
    Pocion();
    Pocion(const Pocion& orig);
    virtual ~Pocion();
private:

};

#endif	/* POCION_H */

