/* 
 * File:   Juego.cpp
 * Author: Juan
 * 
 * Created on 14 de abril de 2015, 19:57
 */

#include "Juego.h"

#define WindowHeight 600.0f
#define WindowWidth 800.0f
/*Juego tiene estados y cambia entre ellos, ademas es el que ejecuta los update y print del estado*/

Juego::Juego() {
    this->window = new sf::RenderWindow(sf::VideoMode(WindowWidth, WindowHeight), "Pre Alpha Dungeon");
    //this->window->setVerticalSyncEnabled(true);
    this->estadoActual= new Estado();
}

/*Juego::Juego(const Juego& orig) {
}*/

Juego::~Juego() {
}

void Juego::run() {
    while(this->window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) this->window->close();
        }
        
        this->window->clear(sf::Color(0,100,0));
                
        if (this->estadoActual != NULL)
            this->estadoActual->update();
        
        this->window->display();
    }
}
