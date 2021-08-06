#include "mapa.h"
#include<iostream>
using namespace std;
mapa::mapa(){
    mytexture1.loadFromFile("img/piso.png");
    mytexture2.loadFromFile("img/blockf.png");
    sprite1.setTexture(mytexture1);
    sprite2.setTexture(mytexture2);

}
void mapa::lectura(){
    ifstream fin("mapa.txt");
    for(int i=0;i<mfilas;i++){
        for(int j=0;j<mcolum;j++){
            fin >> mismapa[i][j];
            if(mismapa[i][j]==0){
                sprite2.setPosition(bancho*my_x,blargo*my_y);
                my_x+=1;
            }
            else if(mismapa[i][j]==1){
                continue;
            }
        }
    }
}
    /*for(int i=0;i<mfilas;i++){
        for(int j=0;j<mcolum;j++){
           // if(mimapa[i][j]==0){
             //   sprite1.setPosition(bancho*my_x,blargo*my_y);

            //}
            if(mimapa[i][j]==1){
                sprite2.setPosition(bancho*my_x,blargo*my_y);
                my_x++;

            }
            if(my_x==mfilas){
                my_x=0;
                my_y+=1;
            }
        }
    }

}*/
/*void mapa::dibujarmapa(){
    for(int i=0;i<mfilas;i++){
        for(int j=0;j<mcolum;j++){
            if(mimapa[i][j]==0){
                sprite1.setPosition(bancho*my_x,blargo*my_y);

            }
            if(mimapa[i][j]==1){
                sprite2.setPosition(bancho*my_x,blargo*my_y);
                my_x++;
            }
            if(my_x==mfilas){
                my_x=0;
                my_y+=1;
            }
        }
    }
}*/
