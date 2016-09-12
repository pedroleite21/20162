#include "elevador.h"
#include <iostream>

using namespace std;

int main(void) {
	Elevador e1;
	
	e1.inicializa(10, 8);
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.entra();
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.entra();
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl; 

	e1.sobe();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;

	e1.sobe();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;

	e1.sobe();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;

	e1.sobe();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;

	e1.sobe();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;

	e1.desce();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;
	e1.desce();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;
	e1.desce();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;
	e1.desce();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;
	e1.sai();
	e1.sai();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;
	e1.desce();
	if (e1.getAndarAtual())	
		cout << "Elevador no " << e1.getAndarAtual() << "o andar " << endl;
	else 
		cout << "Elevador no térreo " << endl;
	e1.sai();
	e1.sai();
	e1.sai();
	e1.sai();
	e1.sai();
	e1.sai();
	cout << "Número de pessoas no elevador: " << e1.getNpessoas() << endl;

	return 0;
}


