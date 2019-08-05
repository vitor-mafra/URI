/*
    Vitor de Oliveira Mafra
    UFMG, April 2019
*/
#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;
int main(){
    double A, B, C;
    double area_triangulo, area_circulo, area_trapezio, area_quadrado, \
                                                         area_retangulo;

    cin >> A >> B >> C;

    area_triangulo = (A * C) / 2;
    area_circulo = PI * (C * C); //pi * raio^2
    area_trapezio = ((A + B) * C) / 2;
    area_quadrado = B * B;
    area_retangulo = A * B;

    cout << fixed << showpoint;
    cout << "TRIANGULO: " << setprecision(3) << area_triangulo << endl;
    cout << "CIRCULO: " << setprecision(3) << area_circulo << endl;
    cout << "TRAPEZIO: " << setprecision(3) << area_trapezio << endl;
    cout << "QUADRADO: " << setprecision(3) << area_quadrado << endl;
    cout << "RETANGULO: " << setprecision(3) << area_retangulo << endl; 

    return 0;
}
