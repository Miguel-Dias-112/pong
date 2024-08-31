#include "Bolinha.h"
#include "Tela.h"
Bolinha::Bolinha(char _mapa[10][50] ,int width, int height){
    x=width/2;
    y=height/2;  
    mapa = _mapa;
    mapa[x][y]='O';
    mover(MEIO_DIR);
}
void Bolinha::mover(VetoresMovimento vet){
    Atualiza_Tela(mapa);
    switch (vet){
        case MEIO_DIR:
            if (y+1>49){
                mover(MEIO_ESQ);
                return;
            }
            y++;
            mapa[x][y] = 'O';
            mapa[x][y-1] = ' ';
            mover(MEIO_DIR);
            break;
        case MEIO_ESQ:
            if (y-1<0){
                mover(MEIO_DIR);
                return;
            }
            y--;
            mapa[x][y+1] = ' ';
            mapa[x][y] = 'O';
            mover(MEIO_ESQ);
            break;
    }

}