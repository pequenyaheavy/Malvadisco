/* 
 * File:   Juego.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 19:57
 */

#ifndef JUEGO_H
#define	JUEGO_H

#include "Estado.h"
#include <SFML/Graphics.hpp>

class Juego {
public:
    Juego();
    //Juego(const Juego& orig);
    virtual ~Juego();
    void run();
    sf::RenderWindow* getWindow();
private:
    sf::RenderWindow *window;
    Estado *estadoActual;
};

#endif	/* JUEGO_H */

