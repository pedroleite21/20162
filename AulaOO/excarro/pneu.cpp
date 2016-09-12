#include "pneu.h"

Pneu::Pneu(string _marca, int _pressao) {
	marca = _marca;
	presssao = _pressao;
}

int Pneu::getPressao(){
	return pressao;
}

void Pneu::setPressao(int _pressao) {
	pressao = _pressao;
}

string Pneu::getMarca() {
	return marca;
} 
