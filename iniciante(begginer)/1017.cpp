/*
    Vitor de Oliveira Mafra
    UFMG, August 2019
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double autonomia = 12; // (12km/L)
    double tempo_de_viagem, velocidade_media, distancia_percorrida, qtd_litros;

    cin >> tempo_de_viagem;
    cin >> velocidade_media;

    //velocidade = distancia / tempo
    //distancia = velocidade * tempo

    distancia_percorrida = velocidade_media * tempo_de_viagem;
    qtd_litros = distancia_percorrida / autonomia; 

    cout << fixed << showpoint;
    cout << setprecision(3) << qtd_litros << endl;

    return 0;
}       
