#include "Player.h"
#include "Tela.h"
Player::Player(char _mapa[10][50],int posx, int posy, char _downKEY,char _upKEY){

    x=posx;
    y=posy;  
    mapa = _mapa;

    mapa[x][y]='x';
    mapa[x+1][y]='x';
    mapa[x-1][y]='x';
    downKEY = _downKEY;
    upKEY = _upKEY;
   
}
void Player::desenhar(){
    Atualiza_Tela(mapa);
    mapa[x][y]='x';
    mapa[x+1][y]='x';
    mapa[x-1][y]='x';
}
void Player::apagar(){
    mapa[x][y]=' ';
    mapa[x+1][y]=' ';
    mapa[x-1][y]=' ';
}
void Player::delizar(){
    char c;

   
    c = getch();
    if (x+1>9 || x-1<0){
        return;
    }
    if (c == upKEY){
        apagar();
        x++;
        desenhar();
        return;
    }
     if (c == downKEY){
        apagar();
        x--;
        desenhar();
        return;
    }
    
   
    
}