#include "escenario.h"
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>
#define filas 15
#define columnas 17
using namespace std;
mapa::mapa(){
    matriz = new int*[filas];
}
mapa::~mapa(){};
void mapa::generarmatriz(){
    srand(time(nullptr));
     for(int i=0;i<filas;i++){
        matriz[i]=new int[columnas];
     }
     for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(i==0 || j==0 || i==filas -1 || j==columnas - 1){
                matriz[i][j]=1;
            }
            else{
                if((i==1 && (j==1 || j==2))|| (j==1 && i==2)|| (i==filas-2 && (j==columnas-3 || j==columnas -2))||(i==filas -3 && j==columnas-2)){
                    matriz[i][j]=0;
                }
                else{
                    matriz[i][j]=rand()% 2 + 2;
                }
            }
        }
     }
}
void mapa::pintarmatriz(){
    sf::Texture mytexture1;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(matriz[i][j]==0 || matriz[i][j]==2){
                if(!mytexture1.loadFromFile("img/piso.png")){
                    std::cout<<"load failed"<<std::endl;
                    system("pause");
                }
                sf::Sprite mysprite1;
                mysprite1.setTexture(mytexture1);
            }
        }
    }
}
void mapa::pintarmatrizsolido(){
    sf::Texture mytexture2;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(matriz[i][j]==1){
                if(!mytexture2.loadFromFile("img/blockf.png")){
                    std::cout<<"load failed"<<std::endl;
                    system("pause");
                }
                sf::Sprite mysprite2;
                mysprite2.setTexture(mytexture2);
            }
            else{
                sf::Texture mytexture3;
                if(matriz[i][j]==3){
                    if(!mytexture3.loadFromFile("img/block1.png")){
                        std::cout<<"load failed"<<std::endl;
                        system("pause");
                    }
                    sf::Sprite mysprite3;
                    mysprite3.setTexture(mytexture3);
                }
            }
        }
    }
}
