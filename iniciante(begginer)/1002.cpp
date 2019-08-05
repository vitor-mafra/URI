/*
    Vitor de Oliveira Mafra
    UFMG, March 2019
*/
#define PI 3.14159
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double raio;
    cin >> raio;

    double area = PI * (raio * raio);

    cout << fixed << showpoint; // defining the setprecision as values after the integer part of the number
    cout << "A=" << std::setprecision(4) << area << endl;

    return 0;
}
