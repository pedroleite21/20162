#ifndef __CIRCULO_H__
#define __CIRCULO_H__

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Circulo {
	private:
		float raio, x, y;
		float area_circulo();
		float distancia_centros(Circulo outro);		
		float circunferencia();
	public:
		Circulo();
		Circulo(float _raio);
		Circulo(float _x, float _y);
		Circulo(float _x, float _y, float _raio);
		float getRaio();
		void setRaio(float _raio);
		float aumentar_raio(int percentual);
		void definir_centro(float _x, float _y);
		void getCentro(float &x, float &y);
		void imprimir_raio();
		void imprimir_centro();
		void imprimir_area();
		void imprimir_distancia(Circulo outro);
		
		string toString();
};

#endif
