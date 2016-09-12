#ifndef __PESSOA_H__
#define __PESSOA_H__

#include <stdio.h>
#include <string.h>

class Pessoa {
	private: 
		int idade;
		float altura;
		char nome[100];
	public: 
		Pessoa();
		void setIdade(int);
		void setAltura(float);
		void setNome(char*);

		char* getNome();
		int getIdade();
		float getAltura();


		void imprime();
};

#endif	
