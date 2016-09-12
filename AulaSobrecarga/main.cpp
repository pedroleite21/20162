#include "circulo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
	Circulo c1, c2;
	
	cout << "Círculo 1:" << endl;
	c1.imprimir_raio();
	c1.imprimir_centro();
	c1.setRaio(9.0);
	c1.definir_centro(4.6, 5.9);
	c1.imprimir_raio();
	c1.imprimir_centro();

	c1.aumentar_raio(15);
	c1.imprimir_raio();

	c1.imprimir_area();
	
	cout << "Círculo 2:" << endl;
	c2.imprimir_raio();
	c2.imprimir_centro();
	c2.setRaio(9.0);
	c2.definir_centro(7, 5);
	c2.imprimir_raio();
	c2.imprimir_centro();

	c2.aumentar_raio(0);
	c2.imprimir_raio();

	c2.imprimir_area();

	cout << "Distância entre c1 e c2: " << endl;

	c1.imprimir_distancia(c2);

	return 0;
 	
}
