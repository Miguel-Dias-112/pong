#include "Bolinha.h"
#include "Tela.h"
Bolinha::Bolinha(char _mapa[10][50] ,int width, int height){
    Inicializa_Tela();

    x=width/2;
    y=height/2;  
    ultimoVetor = MEIO_DIR;
    mapa = _mapa;
    mapa[x][y]='O';
    mover();
}
void Bolinha::escaneiaRedor(){

    if ( mapa[x][y+1] == 'x' ){
        ultimoVetor = MEIO_ESQ;
        return;
    }
    if ( mapa[x][y-1] == 'x' ){
        ultimoVetor = MEIO_DIR;
        return;
    }
    
}
   
   
    
void Bolinha::mover(){
    Atualiza_Tela(mapa);
    escaneiaRedor();

    switch (ultimoVetor){
        case RESET:
            mapa[x][y] = ' ';
            x=5;
            y=25;
            mapa[x][y] = 'O';
            ultimoVetor= MEIO_DIR;
            break;
        case MEIO_DIR:
            if (y==50){
                ultimoVetor=RESET;
                return;
            }
            y++;
            mapa[x][y] = 'O';
            mapa[x][y-1] = ' ';
            ultimoVetor= MEIO_DIR;
            break;
        case MEIO_ESQ:
            if (y==1    ){
                ultimoVetor= RESET;
                return;
            }
            y--;
            mapa[x][y+1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= MEIO_ESQ;
            break;


        case BAIXO_DIR:
            if (x+1>=10  ||  y+1>=50){ 
                ultimoVetor= RESET;
                return;
            }
            x++;
            y++;
            mapa[x-1][y-1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= BAIXO_DIR;
            break;
         case CIMA_DIR:
            if (x-1<=0|| y+1>=50){
                ultimoVetor= RESET;
                return;
            }
            x--;
            y++;
            mapa[x+1][y-1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= CIMA_DIR;
            break;

         case BAIXO_ESQ:
            if (x+1>=10  ||  y-1<=0){ 
                ultimoVetor= RESET;
                return;
            }
            x++;
            y--;
            mapa[x-1][y+1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= BAIXO_ESQ;
            break;
         case CIMA_ESQ:
            if (x-1<0 || y-1<=0){
                ultimoVetor= RESET;
                return;
            }
            x--;
            y--;
            mapa[x+1][y+1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= CIMA_ESQ;
            break;
    }

}