#include "PongMapa.h"
#include "Player.h"
#include "Bolinha.h"
#include "Tela.h"
PongMapa::PongMapa()
{
    for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                mapa[i][j] = ' ';
        }
    }
    Bolinha* bolinha = new Bolinha(mapa, 10, 50);
    Player* player = new Player(mapa, 5, 0, 'w', 's');
        Player* player2 = new Player(mapa, 5, 49, 'o', 'l');

     while (true){
        bolinha->mover();
        char c = getch();
        player2->delizar(c);

        player->delizar(c);

     }
        

}

PongMapa::~PongMapa()
{
    cout << "Destruindo prova" << endl;
}


