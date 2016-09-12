#include "elevador.h"

Elevador::Elevador(){
	cout << "Elevador sendo instanciado" << endl;
	andarAtual=totalAndares=capacidade=nPessoas=0;
}

Elevador::~Elevador(){
	cout << "Elevador sendo deslocado" << endl;
}

void Elevador::inicializa(int _capacidade, int _totalAndares) {
	cout << "Inicializado capacidade e número de andares do prédio" << endl;
	capacidade=_capacidade;
	totalAndares=_totalAndares;
}

void Elevador::entra() {
	if (nPessoas < capacidade) {
	  cout << "Seja bem vindo ao elevador" << endl;
	  nPessoas++;
	}
	else {
	  cout << "Elevador lotado!!!" << endl;
	}
}

void Elevador::sai(){
	if (nPessoas > 0) {
          cout << "Saiu um vivente!!!" << endl;
	  nPessoas--;
	}
	else {
	  cout << "Ninguém saiu, pois o elevador está vazio" << endl;
	}
}
	
void Elevador::sobe(){
	if (andarAtual < totalAndares) {
	   cout << "Suuuubindo! " << endl;
	   andarAtual++;
	}
	else {
	  cout << "Elevador no topo do prédio" << endl;
	}
}

void Elevador::desce(){
	if (andarAtual > 0) {
	   cout << "Desceeendo!! " << endl;
	   andarAtual--;
	}
	else {
	   cout << "Elevador no térreo do prédio" << endl;
	}
}

int Elevador::getAndarAtual(){
	return andarAtual;
}

int Elevador::getCapacidade(){
	return capacidade;
}

int Elevador::getTotalAndares(){
	return totalAndares;
}

int Elevador::getNpessoas(){
	return nPessoas;
}

