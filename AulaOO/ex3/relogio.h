#ifndef __RELOGIO_H__
#define __RELOGIO_H__

#include <stdio.h>
#include <iostream>
using namespace std;

class Relogio {
	private:
		int hora, minuto, segundo;
	public:
		Relogio();
		~Relogio();
		void setHora(int, int, int);
		void* getHora(int*, int*, int*);
		void avancar();
		void imprimir();
};

#endif
