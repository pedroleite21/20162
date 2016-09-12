#ifndef __CANDIDATO_H__
#define __CANDIDATO_H__

#include <fstream>
#include <iostream>
#include <string>
#include <iomainip>
#include <cstdlib>
using namespace std;

class Candidato {
	private:
		int numero, votos;
		string nome, partido;
	public:
		Candidato();
		string getNome();
		void setNome(string _nome);
		int getNumero();
		void setNumero(int _numero);
		string getPartido();
		void setPartido(string _partido);
		int getVotos();
		void setVotos(int _votos);
};

#endif
