#include "Tela.h"
#include <iostream>
#include <chrono>
#include <thread>

void Atualiza_Tela(char mapa[10][50]) {
    clear();
    printw("+");
    for (int j = 0; j < 50; j++) {
        printw("-");
    }
    printw("+\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 50; j++) {
            printw("%c", mapa[i][j]);
        }
        printw("\n");
    }

    printw("+");
    for (int j = 0; j < 50; j++) {
        printw("-");
    }
    printw("+\n");

    refresh();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

void Inicializa_Tela() {
    initscr();
    noecho();
        nodelay(stdscr, TRUE);
    cbreak();
    keypad(stdscr, TRUE);
}

void Finaliza_Tela() {
    endwin();
}
