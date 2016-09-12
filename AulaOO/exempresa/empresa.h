#ifndef __EMPRESA_H__
#define __EMPRESA_H__

#include <stdio.h>
#include <iostream>
#include "funcionario.h"
using namespace std;

class Empresa {
	private:
		string nomeempresa;
		int cnpj;
		Funcionario *f;
	public:
		Empresa(string _nomeempresa="Desconhecida", int _cpnj = -1);
		~Empresa();
		
		string getNomeEmpresa();
		int getCNPJ();
		void setNomeEmpresa(string _nomeempresa);
		void setCNPJ(int _cnpj);
};

#endif
