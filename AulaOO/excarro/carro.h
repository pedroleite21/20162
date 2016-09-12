#ifndef __CARRO_H__
#define __CARRO_H__

#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

#include "pneu.h"
#include "motor.h"

class Carro {
	private:
		int quilometragem;
		string marca;
		
		Motor *m;
		Pneu *p[4];
	public:
		Carro(string _marca="desconhecida", int _quilometragem=0);
		void setQuilometragem(int _quilometragem);
		int getQuilometragem();
		string getMarca();

		void desloca(int _kms);
		void abastece (float _lts, int _pressao);

		void print();
};

#endif
