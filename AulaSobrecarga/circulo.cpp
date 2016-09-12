#include "circulo.h"
#include <math.h>

float Circulo::area_circulo() {
	float area1;
	area1 = 3.14 * (raio * raio);
	return area1;
}

float Circulo::distancia_centros(Circulo outro) {
	float x2, y2, Xquadr, Yquadr;

	outro.getCentro(x2,y2);

	Xquadr = (x2 - x) * (x2 - x);
	Yquadr = (y2 - x) * (y2 - y);

	return sqrt(Xquadr + Yquadr);
	
}

float Circulo::circunferencia() {
	float circun;
	circun = 2 * 3.14 * raio;
	return circun;
}

Circulo::Circulo() {
	x = y = 0;
	raio = 1;
}

Circulo::Circulo(float _raio) {
	x = y = 0;
	raio = _raio;
}

Circulo::Circulo(float _x, float _y) {
	x = _x;
	y = _y;
	raio = 1;
}
Circulo::Circulo(float _x, float _y, float _raio) {
	x = _x;
	y = _y;
	raio = _raio;
}

float Circulo::getRaio() {
	return raio;
}

void Circulo::setRaio(float _raio) {
	raio = _raio;
}

float Circulo::aumentar_raio(int percentual) {
	int aumentar;
	aumentar = 100 + percentual;	
	raio = (raio * aumentar) / 100;
	return raio;
}

void Circulo::definir_centro(float _x, float _y) {
	x = _x;
	y = _y;
}

void Circulo::getCentro (float &_x, float &_y) {
	_x = x;
	_y = y;
}

void Circulo::imprimir_raio() {
	cout << "O tamanho do raio é: " << raio << endl;
}

void Circulo::imprimir_centro() {
	cout << "O centro está em: [" << x << ", " << y << "] " << endl;
}

void Circulo::imprimir_area() {	
	cout << "A área é de: " << area_circulo() << endl;	
}

void Circulo::imprimir_distancia(Circulo outro) {
	cout << "A distância entre os dois círculos é de: " << distancia_centros(outro) << endl;
}

string Circulo::toString() {
	stringstream tmpss;
	string tmpstr;

	tmpss << "px:" << this->x << ";px:" << this->y << ";r:" << this->raio;
	tmpss >> tmpstr;

	return tmpstr;
}

Circulo Circulo::operator<< (Circulo &c) {
	
}

