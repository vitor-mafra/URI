/*
    Vitor de Oliveira Mafra
    UFMG, April 2018
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int distancia_percorrida;
    double combustive_gasto, performance;

    cin >> distancia_percorrida >> combustive_gasto;

    performance = distancia_percorrida / combustive_gasto;

    cout << fixed << showpoint;
    cout << setprecision(3) << performance << " km/l" << endl;

    return 0;
}