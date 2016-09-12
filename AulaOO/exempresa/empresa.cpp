#include "empresa.h"

Empresa::Empresa(string _nomempresa, int _cnpj){
	nomeempresa = _nomempresa;
	cnpj = _cnpj;

	f = new Funcionario("Zé" , 800.00, Data(23,6,2010));
	
	cout << "Empresa criada com sucesso" << endl;
}

Empresa::~Empresa(){
	cout << "O objeto foi deslocado" << endl;
}

string Empresa::getNomeEmpresa() {
	return nomempresa;
}

int Empresa::getCNPJ() {
	return cnpj;
}

void Empresa::setNomeEmpresa(string _nomeempresa){
	nomeempresa = _nomeempresa;
}

void Empresa::setCNPJ(int _cnpj){
	cnpj = _cnpj;
}
