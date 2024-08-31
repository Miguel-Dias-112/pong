#ifndef PLAYER_h
#define PLAYER_h
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
class Player {
    private:
        int x, y;
        char upKEY, downKEY;
        char (*mapa)[50];
        void desenhar();
        void apagar();
    
    public:

        Player(char _mapa[10][50],int posx, int posy, char upKEY, char downKEY);
        void delizar();
        
        
        
};

#endif // BOLINHA_h
