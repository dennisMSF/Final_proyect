#ifndef JUEGO_H
#define JUEGO_H
#include<SFML/Graphics.hpp>
#include "mapa.h"
#include "personaje.h"
#include"muro.h"
class juego{
public:
    juego();
    void run();
private:
    sf::RenderWindow mywindow;
    mapa mimapa;
    personaje jugador;
};
#endif // JUEGO_H
