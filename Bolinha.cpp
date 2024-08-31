#include "Bolinha.h"
#include "Tela.h"
Bolinha::Bolinha(char _mapa[10][50] ,int width, int height){
    Inicializa_Tela();

    x=width/2;
    y=height/2;  
    ultimoVetor = CIMA_DIR;
    mapa = _mapa;
    mapa[x][y]='O';
    mover();
}
void Bolinha::mover(){
    Atualiza_Tela(mapa);

    switch (ultimoVetor){
        case MEIO_DIR:
            if (y+1>49){
                ultimoVetor=MEIO_ESQ;
                return;
            }
            y++;
            mapa[x][y] = 'O';
            mapa[x][y-1] = ' ';
            ultimoVetor= MEIO_DIR;
            break;
        case MEIO_ESQ:
            if (y-1<0){
                ultimoVetor= MEIO_DIR;
                return;
            }
            y--;
            mapa[x][y+1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= MEIO_ESQ;
            break;


        case BAIXO_DIR:
            if (x+1>=10  ||  y+1>=50){ 
                ultimoVetor= CIMA_DIR;
                return;
            }
            x++;
            y++;
            mapa[x-1][y-1] = ' ';
            mapa[x][y] = 'O';
            ultimoVetor= BAIXO_DIR;
            break;
         case CIMA_DIR:
            if (x-1<0|| y+1>=50){
                ultimoVetor= BAIXO_DIR;
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
                ultimoVetor= CIMA_ESQ;
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
                ultimoVetor= BAIXO_ESQ;
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