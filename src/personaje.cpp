#include "personaje.h"
#include <stdlib.h>
#include<windows.h>
personaje::personaje():sf::Sprite(){
    frame=0;
    row=0;
    //spritewalk(texturewalk);
   // spritewalk.setTextureRect(IntRect(71,1,35,50));
    texturewalk.loadFromFile("img/movimiento2.jpg");
    this->setTexture(texturewalk);
    this->setTextureRect(sf::IntRect(40,40,40,40));
//    this->setTextureRect()
    this->setPosition(40,40);
}
void personaje::mover(){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        this->move(-40, 0);
        Sleep(150);
        this->setTextureRect(sf::IntRect(40*frame,120,40,40));
        frame ++;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        this->move(40, 0);
        Sleep(150);
        this->setTextureRect(sf::IntRect(40*frame,80,40,40));
        frame++;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        this->move(0, -40);
        Sleep(150);
       this->setTextureRect(sf::IntRect(40*frame,40,40,40));
        frame ++;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        this->move(0, 40);
        Sleep(150);
        this->setTextureRect(sf::IntRect(40*frame,1,40,40));
        frame++;
    }
    if(frame>=8){
        frame=0;
    }
}
