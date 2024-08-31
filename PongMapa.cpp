#include "PongMapa.h"
#include "Bolinha.h"
PongMapa::PongMapa()
{
    for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                mapa[i][j] = ' ';
        }
    }
    bolinha = new Bolinha(mapa, 10, 50);
}

PongMapa::~PongMapa()
{
    cout << "Destruindo prova" << endl;
}


