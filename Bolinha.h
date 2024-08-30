#ifndef BOLINHA_h
#define BOLINHA_h
#include <iostream>
#include <string>

class Bolinha {
    private:
        int x, y;
        int raio;
        int cor;
    public:
        Bolinha(char* tabuleiro,int width, int height);
        char colisao(char* tabuleiro, int x, int y);
        void moverF(char direcao);
};

using namespace std;
#endif // BOLINHA_h
