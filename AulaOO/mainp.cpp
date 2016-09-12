#include "pessoa.h"
#include <iostream>

using namespace std;

int main() {
	Pessoa p;
	p.imprime();

	p.setNome("pedro");
	p.setAltura(1.72);
	p.setIdade(17);
	p.imprime();

	string nome;
	int idade;
	float altura;

	nome = p.getNome();
	idade = p.getIdade();
	altura = p.getAltura();
	
	cout << "O nome é:  " << nome << endl;
	cout << "A idade é:  " << idade << endl;
	cout << "A altura é:  " < altura << endl;

	return 0;
}
