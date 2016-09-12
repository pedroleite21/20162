#include "funcionario.h"

Funcionario()::Funcionario(string _nome, float _salario, const Data(0,0,0) {
	nome = _nome;
	salario = _ salario;
	
	cout << "O funcionário foi criado com sucesso" << endl;
}

Funcionario()::~Funcionario() {
	cout << "O objeto foi deslocado" << endl;
}

string Funcionario()::getNome() {
	return nome;
}

float Funcionario()::getSalario() {
	return salario;
}

void Funcionario()::setNome(string _nome) {
	nome = _nome;
}

void Funcionario()::setSalario(string _salario) {
	salario = _salario;
}
