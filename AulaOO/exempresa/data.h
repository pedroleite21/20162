#ifndef __DATA_H__
#define __DATA_H__

#include <iostream>
using namespace std;

class Data {
	private:
		int dia, mes, ano;
	public:
		Data(int _dia = 1, int _mes = 1, int _ano = 1);
		int getDia();
		int getMes();
		int getAno();
		void setDia(int _dia);
		void setMes(int _mes);
		void setAno (int _ano);
		string toString();
};

#endif
