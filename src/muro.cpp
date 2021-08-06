#include "muro.h"
muro::muro(int x,int y):sf::Sprite(){
    mytexture3.loadFromFile("img/blockf.png");
    this->setTexture(mytexture3);
    this->setTextureRect(sf::IntRect(0,0,60,60));
    this->setPosition(x,y);
}
