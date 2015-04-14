/* 
 * File:   Bola.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:18
 */

#ifndef BOLA_H
#define	BOLA_H

#include "Proyectil.h"

class Bola : public Proyectil {
public:
    Bola();
    Bola(const Bola& orig);
    virtual ~Bola();
private:

};

#endif	/* BOLA_H */

