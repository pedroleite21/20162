#include "circulo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

ostream& operator<< (ostream &out, Circulo &c) {
	float x1, y1;
	c.getCentro(x1, y1);
	out << "x = " << x1 << ", y = " << y1 << ", raio = " << c.getRaio();
	return out;
}

istream& operator>> (istream &in, Circulo &c){
	int x, y, r;
	in >> x >> y >> r;
	c.definir_centro(x, y);
	c.setRaio(r);
	return in;
}

int main(void) {
	Circulo myC, myC2;
	string values;
		
	cout << myC << endl;
	values=myC.toString();
	cout << values << endl;
	
	cout << "Informe os valores de x, y e r para o círculo 1:" << endl;
	cin >> myC;
	cout << myC;
	cout << endl;
	myC.imprimir_area();
	
	cout << endl;

	cout << "Informe os valores de x, y e r para o círculo 2:" << endl;
	cin >> myC2;
	cout << myC2;
	cout << endl;
	myC2.imprimir_area();

	return 0;
 	
}
