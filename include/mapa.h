#ifndef MAPA_H
#define MAPA_H
#include "muro.h"
#include<iostream>
#include<fstream>
#include<SFML/Graphics.hpp>
#define mfilas 15
#define mcolum 11
#define bancho 60
#define blargo 60
using namespace std;
class mapa{
public:
    int my_x=0;
    int my_y=0;
    int mismapa[mfilas][mcolum];
    void lectura();
    mapa();
    void dibujarmapa();
     sf::Sprite sprite1;
    sf::Sprite sprite2;
private:
    sf::Texture mytexture2;
    sf::Texture mytexture1;

};
#endif // MAPA_H
