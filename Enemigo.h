/* 
 * File:   Enemigo.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:08
 */

#ifndef ENEMIGO_H
#define	ENEMIGO_H

#include "NPC.h"

class Enemigo : public NPC {
public:
    Enemigo();
    Enemigo(const Enemigo& orig);
    virtual ~Enemigo();
private:

};

#endif	/* ENEMIGO_H */

