#include "relogio.h"
hora, minuto, segundo;
Relogio::Relogio() {
	cout << "Relógio sendo inicializado" << endl;
	hora=minuto=segundo=0;
}

Relogio::~Relogio(){
	cout << "Objeto sendo deslocado" << endl;
}

void Relogio::setHora(int _hora, int _minuto, int _segundo){
	hora = _hora;
	minuto = _minuto;
	segundo = _segundo;	
}

void* Relogio::getHora(int* _hora, int* _minuto, int* _segundo ) {
	*_hora = hora;
	*_minuto = minuto;
	*_segundo = segundo;
}

void Relogio::avancar() {
	segundo++;
	if (segundo >= 60) {
		segundo = 00;
		minuto++;
		if (minuto = 60) {
			minuto = 00;
			hora++;
			if (hora = 24) {
			hora = 00;
			}	
		}
	}

void Relogio::imprimir() {		
	cout << hora << ":" << minuto << ":" << segundo << endl;
