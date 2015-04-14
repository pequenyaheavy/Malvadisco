/* 
 * File:   Vacio.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:23
 */

#ifndef VACIO_H
#define	VACIO_H

#include "Suelo.h"

class Vacio : public Suelo {
public:
    Vacio();
    Vacio(const Vacio& orig);
    virtual ~Vacio();
private:

};

#endif	/* VACIO_H */

