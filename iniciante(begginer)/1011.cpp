/*
    Vitor de Oliveira Mafra
    UFMG, April 2019
*/
#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main(){

    double raio, volume;

    cin >> raio;

    volume = (4.0/3) * PI * (raio*raio*raio); // volume = 4/3 * pi * r^3 

    cout << fixed << showpoint;
    cout << "VOLUME = " << setprecision(3) << volume << endl;

    return 0;
}
