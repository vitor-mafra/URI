/*
    Vitor de Oliveira Mafra
    UFMG, April 2018
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	string vendedor;
	double salario_base, vendas, salario_final;

	getline(cin, vendedor);
	cin >> salario_base >> vendas;

	salario_final = (salario_base + (0.15 * vendas)); 


	cout << fixed << showpoint;
	cout << "TOTAL = R$ " << setprecision(2) << salario_final << endl;

	return 0;
}
