#include "ponto.h"

Ponto::Ponto() {
	x = y = -1;
}

void Ponto::setX(int valor) {
	x = valor;
}

void Ponto::setY(int valor) {
	y = valor;
}

void Ponto::imprime() {
	printf("\n Dados do ponto: (x=%d, y=%d) \n", x, y);
}
