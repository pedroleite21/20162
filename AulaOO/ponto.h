/* .h define a classe */

#ifndef __PONTO_H__
#define __PONTO_H__

#include <stdio.h>

class Ponto {
	private:
		int x, y;
	public:
		Ponto();
		void setX(int valor);
		void setY(int valor);
		void imprime();
};

#endif
