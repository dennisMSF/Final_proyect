#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<SFML/Graphics.hpp>
class personaje:public sf::Sprite{
public:
    personaje();
    void mover();
private:
    sf::Texture texturewalk;
    sf::Sprite spritewalk;
    int frame;
    int row;
};

#endif // PERSONAJE_H
