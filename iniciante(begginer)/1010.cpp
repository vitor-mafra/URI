/*
    Vitor de Oliveira Mafra
    UFMG, April 2018
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int id_peca_1, num_pecas_1, id_peca_2, num_pecas_2;
	double preco_peca_1, preco_peca_2;
	double total_a_pagar;

	cin >> id_peca_1 >> num_pecas_1 >> preco_peca_1;
	cin >> id_peca_2 >> num_pecas_2 >> preco_peca_2;

	total_a_pagar = ((num_pecas_1 * preco_peca_1) + (num_pecas_2 *  preco_peca_2));

	cout << fixed << showpoint;
	cout << "VALOR A PAGAR: R$ " << setprecision(2) << total_a_pagar << endl;

	return 0;
}
