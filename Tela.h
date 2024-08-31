#ifndef TELA_H
#define TELA_H
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ncurses.h>
#include <unistd.h>

using namespace std;



void Atualiza_Tela(char mapa[10][50]){

        refresh();
        clear();
        printw("+");
        for (int j = 0; j < 50; j++) {
            printw("-");
        }
        printw("+\n");
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 50; j++){
                printw("%c", mapa[i][j]);
                
            }
            printw("\n");
        }
        for (int j = 0; j < 50; j++) {
            printw("-");
        }
        printw("+\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(50));

}
void Inicializa_Tela(char mapa[10][50]){
    initscr();
    // Não mostrar a entrada do usuário
    noecho();
    // Não usar buffering de entrada
    cbreak();
    // Permitir captura de teclas especiais
    keypad(stdscr, TRUE);
    
}
#endif 