#ifndef __FUNCIONARIO_H__
#define __FUNCIONARIO_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include "data.h"
using namespace std;

class Funcionario {
	private:
		string nome;
		float salario;
		Data *d;
	public:
		Funcionario(string _nome="Desconhecido", float _salario = 0.0, const Data &val);
		~Funcionario();
		string getNome();
		float getSalario();
		void setNome(string);
		void setSalario(float);
};

#endif
