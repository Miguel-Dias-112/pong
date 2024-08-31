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
   
    PongMapa();
   
    
    ~PongMapa();
};

#endif // PROVA_H
