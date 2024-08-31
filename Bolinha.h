#ifndef BOLINHA_h
#define BOLINHA_h
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
class Bolinha {
    private:
        int x, y;
        int raio;
        int cor;
    
        char (*mapa)[50];
    
    public:
        enum VetoresMovimento {CIMA_DIR, BAIXO_DIR, MEIO_DIR, CIMA_ESQ, BAIXO_ESQ, MEIO_ESQ  };

        Bolinha(char _mapa[10][50] ,int width, int height);
        //escaneia a lateral da bolinha e vê se tem player , ou borda de mapa
        
        char colisao(char* tabuleiro, int x, int y);

        //move a bolinha, nos vetores dados acima, 
        //caso ela colida com o teto
        //moverá para o vetor inverso, cima_Dir move pra baixo dir
        //caso ela colida com um player, randomiza um vetor de saida 
        void mover(VetoresMovimento vet);
        
};

#endif // BOLINHA_h
