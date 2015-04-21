/* 
 * File:   NPC.h
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:08
 */

#ifndef NPC_H
#define	NPC_H

#include <SFML/Graphics.hpp>

class NPC {
public:
    NPC(sf::Texture *texture, int x, int y);
    //NPC(const NPC& orig);
    virtual ~NPC();
    /*calcular nueva posicion en new y antigua guardarla en old cada X segundos*/
    virtual void update();
    /*interpolar x, y desde old a new*/
    virtual void render();
    int getX();
    int getY();
    int getState();
    void setX(int x);
    void setY(int y);
    void setState(int state);
private:
    sf::Sprite *sprite;
    /*variables de posicion para bucle interpolado*/
    int x,y;
    /*variable para la animacion en el render*/
    int state;
};

#endif	/* NPC_H */

