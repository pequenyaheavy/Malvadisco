/* 
 * File:   Muro.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:22
 */

#ifndef MURO_H
#define	MURO_H

#include "Suelo.h"

class Muro : public Suelo {
public:
    Muro();
    Muro(const Muro& orig);
    virtual ~Muro();
private:

};

#endif	/* MURO_H */

