/*
    Vitor de Oliveira Mafra
    UFMG, March 2018
*/
#define PESO_NOTA_A 2
#define PESO_NOTA_B 3
#define PESO_NOTA_C 5
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double nota_a, nota_b, nota_c, media;
	cin >> nota_a >> nota_b >> nota_c;

	media = ((nota_a * PESO_NOTA_A) + (nota_b * PESO_NOTA_B) + (nota_c * PESO_NOTA_C)) / (PESO_NOTA_A + PESO_NOTA_B + PESO_NOTA_C); //media ponderada

	cout << fixed << showpoint;
	cout << "MEDIA = " << setprecision(1) << media << endl;

	return 0;
}