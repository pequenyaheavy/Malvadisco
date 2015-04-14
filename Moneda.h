/* 
 * File:   Moneda.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:21
 */

#ifndef MONEDA_H
#define	MONEDA_H

#include "Objeto.h"

class Moneda : public Objeto {
public:
    Moneda();
    Moneda(const Moneda& orig);
    virtual ~Moneda();
private:

};

#endif	/* MONEDA_H */

