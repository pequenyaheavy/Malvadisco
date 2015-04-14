/* 
 * File:   EstadoTienda.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:00
 */

#ifndef ESTADOTIENDA_H
#define	ESTADOTIENDA_H

#include "Estado.h"

class EstadoTienda : public Estado {
public:
    EstadoTienda();
    EstadoTienda(const EstadoTienda& orig);
    virtual ~EstadoTienda();
private:

};

#endif	/* ESTADOTIENDA_H */

