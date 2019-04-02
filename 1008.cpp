/*
    Vitor de Oliveira Mafra
    UFMG, April 2018
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int id_funcionario, horas_trabalhadas;
	double valor_hora, salario;

	cin >> id_funcionario >> horas_trabalhadas >> valor_hora;

	salario = (horas_trabalhadas * valor_hora);

	cout << "NUMBER = " << id_funcionario << endl;

	cout << fixed << showpoint;
	cout << "SALARY = U$ " << setprecision(2) << salario << endl;

	return 0;
}