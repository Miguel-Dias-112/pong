#ifndef PONG_H
#define PONG_H

#include <iostream>
#include <string>
#include "Bolinha.h"
#include <chrono>
#include <thread>

using namespace std;
class PongMapa
{
private:
    char mapa[10][50];
    Bolinha *bolinha;
public:
    PongMapa(){

        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                mapa[i][j] = ' ';
            }
        }

        bolinha = new Bolinha(mapa, 10, 50);

        while (true){
            bolinha->mover(mapa,'L');

             //Atualiza_Tela();

        }
        
    }
    void Atualiza_Tela(){
        system("clear");
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                cout << mapa[i][j];
            }
            cout << endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    ~PongMapa();
};

#endif // PROVA_H
