/* 
 * File:   EstadoIntroduccion.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:00
 */

#ifndef ESTADOINTRODUCCION_H
#define	ESTADOINTRODUCCION_H

#include "Estado.h"

class EstadoIntroduccion : public Estado {
public:
    EstadoIntroduccion();
    EstadoIntroduccion(const EstadoIntroduccion& orig);
    virtual ~EstadoIntroduccion();
private:

};

#endif	/* ESTADOINTRODUCCION_H */

