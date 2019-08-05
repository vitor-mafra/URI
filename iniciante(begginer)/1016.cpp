/*
    Vitor de Oliveira Mafra
    UFMG, April 2018
*/
#include <iostream>

using namespace std;

int main(){
    int velocidade_x = 60, velocidade_y = 90, distancia;
    int tempo, velocidade_relativa;

    cin >> distancia;

    velocidade_relativa = velocidade_y - velocidade_x; // 30km/h == 30km/60min == 1km/2min == 0.5km/min
    
    // velocidade = distancia / tempo
    // tempo = distancia / velocidade
    tempo = distancia / 0.5;

    cout << tempo << " minutos" << endl;

    return 0;
}       
