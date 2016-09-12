#include "pessoa.h"

Pessoa::Pessoa() {
	idade = 1;
	altura = 1;
	nome[0] = 0;
}

void Pessoa::setIdade(int _idade) {
	idade = _idade;
}


void Pessoa::setNome(char* _nome) {
	strcpy(nome,_nome);
}

void Pessoa::setAltura(float _altura) {
	altura = _altura;
}

char* Pessoa::getNome() {
	return nome;
}

int Pessoa::getIdade() {
	return idade;
}

float Pessoa::getAltura() {
	return altura;
}

void Pessoa::imprime() {
	printf("Nome = %c, Idade = %d, Altura=%f\n", *nome, idade, altura);
}
