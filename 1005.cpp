/*
    Vitor de Oliveira Mafra
    UFMG, March 2018
*/
#define PESO_NOTA_A 3.5
#define PESO_NOTA_B 7.5
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double nota_a, nota_b, media;
	cin >> nota_a >> nota_b;

	media = ((nota_a * PESO_NOTA_A) + (nota_b * PESO_NOTA_B)) / (PESO_NOTA_A + PESO_NOTA_B); //media ponderada

	cout << fixed << showpoint;
	cout << "MEDIA = " << setprecision(5) << media << endl;

	return 0;
}