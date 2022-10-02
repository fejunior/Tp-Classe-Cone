#include "TestCone.h"
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

TestCone::TestCone() {};

double digitaValor() {
	double number;

	cin >> number;

	while (number <= 0)
	{
		cout << "Valor inválido digite um número > 0.0: ";
		cin >> number;
	}

	return number;
}

void TestCone::menu() {

	setlocale(LC_ALL, "PT_BR");
	double raio, altura;

	cout << "Digite o valor do raio > 0.0: ";
	objectCone.setRaio(digitaValor());

	cout << "Digite o valor do altura > 0.0: ";
	objectCone.setAltura(digitaValor());

	cout << fixed << setprecision(2)<<endl;
	cout << "A geratriz é " << objectCone.calculaGeratriz() << endl;
	cout << "A área lateral é " << objectCone.calculaAreaLateral() << endl;
	cout << "A área Total é " << objectCone.calculaAreaTotal() << endl;
	cout << "O volume é " << objectCone.calculaVolume() << endl;


}