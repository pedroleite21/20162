#ifndef __PNEU_H__
#define __PNEU_H__

#include <string>
using namespace std;

class Pneu {
	private:
		int pressao;
		string marca;
	public:
		Pneu(int pressao=-1, string _marca="desconhecida");
		int getPressao();
		void setPressao(int _pressao);
		string getMarca();
};

#endif
