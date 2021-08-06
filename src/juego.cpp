#include "juego.h"
juego::juego(){
    mywindow.create(sf::VideoMode(900, 660, 32),"bomberman",sf::Style::Close);
    mywindow.setVerticalSyncEnabled(true);
}
void juego::run(){
    while (mywindow.isOpen())
	{
		sf::Event event;
		while (mywindow.pollEvent(event)){
			if (event.type == sf::Event::Closed)
				mywindow.close();
		}
		jugador.mover();
		//mimapa.lectura();
		//for(int i=0;i<115;i++){
            mimapa.lectura();
            mywindow.draw(mimapa.sprite2);
		//}
		mywindow.draw(jugador);
		mywindow.display();
	}
}
