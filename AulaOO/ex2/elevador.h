#ifndef __ELEVADOR_H__
#define __ELEVADOR_H__

#include <iostream>
using namespace std;

class Elevador {
  private:
    int andarAtual, totalAndares, capacidade, nPessoas;
  public:
    Elevador();
    ~Elevador();

    void inicializa(int, int);
    void entra();
    void sai();
    void sobe();
    void desce();

    int getAndarAtual();
    int getCapacidade();
    int getTotalAndares();
    int getNpessoas();
};

#endif
