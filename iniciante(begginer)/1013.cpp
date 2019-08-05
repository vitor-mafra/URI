/*
    Vitor de Oliveira Mafra
    UFMG, April 2019
*/
#include <iostream>
#include <cstdlib> //biblioteca para usar a funcao que retorna o 
                    // modulo de um numero
using namespace std;

int maior_x_y(int x, int y){
    int maior = (x + y + abs(x - y)) / 2;

    return maior;
}

int main(){
    int a, b, c;
    int maior, maior_aux;

    cin >> a >> b >> c;

    maior_aux = maior_x_y(a,b);
    maior = maior_x_y(maior_aux, c);

    cout << maior << " eh o maior" << endl;

    return 0;
}
