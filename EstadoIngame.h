/* 
 * File:   EstadoIngame.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:01
 */

#ifndef ESTADOINGAME_H
#define	ESTADOINGAME_H

#include "Estado.h"

class EstadoIngame : public Estado {
public:
    EstadoIngame();
    EstadoIngame(const EstadoIngame& orig);
    virtual ~EstadoIngame();
private:

};

#endif	/* ESTADOINGAME_H */

