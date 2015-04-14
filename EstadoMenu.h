/* 
 * File:   EstadoMenu.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:00
 */

#ifndef ESTADOMENU_H
#define	ESTADOMENU_H

#include "Estado.h"

class EstadoMenu : public Estado {
public:
    EstadoMenu();
    EstadoMenu(const EstadoMenu& orig);
    virtual ~EstadoMenu();
private:

};

#endif	/* ESTADOMENU_H */

