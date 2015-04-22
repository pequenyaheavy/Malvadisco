/* 
 * File:   main.cpp
 * Author: Juan
 *
 * Created on 14 de abril de 2015, 20:43
 */

#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"

using namespace std;

int main(int argc, char** argv) {
    Juego *juego = new Juego();

    juego->run();
    
    delete juego;

    return 0;
}

