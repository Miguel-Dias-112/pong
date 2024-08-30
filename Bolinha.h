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
        void Atualiza_Tela(char mapa[10][50]){
            system("clear");
            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 50; j++){
                    cout << mapa[i][j];
                }
                cout << endl;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    
    public:
        Bolinha(char mapa[10][50] ,int width, int height){
            x=width/2;
            y=height/2;
            mapa[x][y]='O';
            
        }
        char colisao(char* tabuleiro, int x, int y);

        void mover(char mapa[10][50], char dir  ){
            Atualiza_Tela(mapa);

            switch (dir){
                case 'D':
                    if (y+1>49){
                        mover(mapa,'E');
                        return;
                    }
                    y++;
                    mapa[x][y] = 'E';
                    mapa[x][y-1] = ' ';
                    break;
                case 'E':
                    if (y-1<0){
                        mover(mapa,'D');
                        return;
                    }
                    y--;
                    mapa[x][y+1] = ' ';
                    mapa[x][y] = 'E';
                    mover(mapa,'E');
                    break;

                case 'C':
                    if (y+1>49){
                        mover(mapa,'E');
                        return;
                    }
                    y++;
                    mapa[x][y] = 'E';
                    mapa[x][y-1] = ' ';
                    break;
                default:
                    break;
                }
                
                
            }
        
};

using namespace std;
#endif // BOLINHA_h
