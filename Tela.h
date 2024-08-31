#ifndef TELA_H
#define TELA_H
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void Atualiza_Tela(char mapa[10][50]){
        system("clear");
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                cout << mapa[i][j];
            }
            cout << endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
}
#endif 