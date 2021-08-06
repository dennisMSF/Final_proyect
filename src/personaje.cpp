#include "personaje.h"
#include<iostream>
personaje::personaje():Sprite(){
    frame=0;
    player1.loadFromFile("img/walk.png");
    this->setTexture(player1);
    this->setTextureRect(sf::IntRect(60,60,60,60));
    this->setPosition(60,60);
}
void personaje::mover(){
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        x-=60;
        if(x>0&& (y==60 || y==180 || y==300|| y==420 || y==540)){
            std::cout<<x<<","<<y<<std::endl;
            this->move(-60, 0);
            Sleep(150);
            this->setTextureRect(sf::IntRect(60*frame,180,60,60));
            frame ++;}
        else{
            y=this->getPosition().x;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        x+=60;
        if(x<840 && (y==60 || y==180 || y==300|| y==420 || y==540)){
            std::cout<<x<<","<<y<<std::endl;
            this->move(60, 0);
            Sleep(150);
            this->setTextureRect(sf::IntRect(60*frame,120,60,60));
            frame++;}
        else{
            y=this->getPosition().x;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        y-=60;
        if(y>0&& (x==60 || x==180 ||x==300|| x==420 || x==540 || x==660 || x==780) ){
            std::cout<<x<<","<<y<<std::endl;
            this->move(0, -60);
            Sleep(150);
            this->setTextureRect(sf::IntRect(60*frame,60,60,60));
            frame ++;}
        else{
            y=this->getPosition().y;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        y+=60;
        if(y<600&& (x==60 || x==180 ||x==300|| x==420 || x==540 || x==660 || x==780) ){
            std::cout<<x<<","<<y<<std::endl;
            this->move(0, 60);
            Sleep(150);
            this->setTextureRect(sf::IntRect(60*frame,0,60,60));
            frame++;}
        else{
            y=this->getPosition().y;
        }
    }
    if(frame>=8){
        frame=0;
    }
}
