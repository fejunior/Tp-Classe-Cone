#include "Cone.h"
#include <cmath>

Cone::Cone() {
	raio = 1.0;
	altura = 1.0;
}

void Cone::setRaio(double number) {
	raio = number;
}

void Cone::setAltura(double number) {
	altura = number;
}

double Cone::getRaio()const {
	return raio;
}

double Cone::getAltura()const {
	return altura;
}

double Cone::calculaGeratriz()const {
	return sqrt((altura * altura) + (raio * raio));
}

double Cone::calculaAreaLateral()const {
	return 3.14 * raio * Cone::calculaGeratriz();
}

double Cone::calculaAreaTotal()const {
	return 3.14 * raio * (Cone::calculaGeratriz() + raio);
}

double Cone::calculaVolume()const {
	return 1.0 / 3.0 * 3.14 * raio * raio * altura;
}