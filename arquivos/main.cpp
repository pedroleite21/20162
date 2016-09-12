#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct candidato {
	string nome, partido;
	int num, votos;
} candidatos[20];

int main(void) {
	int i;
	ifstream arq, urna1,urna2,urna3,urna4;
	
	cout << "Abrindo arquivos..." << endl;

	arq.open("candidatos.txt", ios::in);
	urna1.open("urna1.txt", ios::in);
	urna2.open("urna2.txt", ios::in);
	urna3.open("urna3.txt", ios::in);
	urna4.open("urna4.txt", ios::in);
	
	if (!arq.is_open())
			return (0);

	int numero;
	string pessoa, partido;	
	for (i=0; i < 20; i++) {
			arq >> numero >> pessoa >> partido;
			candidatos[i].nome = pessoa;
			candidatos[i].num = numero;
			candidatos[i].partido = partido;
	}

	for (i=0; i < 20; i++) {
		candidatos[i].votos = 0;
	}

	int voto;
	while (urna1.good()) {
		urna1 >> voto;
		if (voto == 1) 
			candidatos[0].votos = candidatos[0].votos + 1; 
		if (voto == 2) 
			candidatos[1].votos = candidatos[1].votos + 1;
		if (voto == 3) 
			candidatos[2].votos = candidatos[2].votos + 1; 
		if (voto == 4) 
			candidatos[3].votos = candidatos[3].votos + 1; 
		if (voto == 5) 
			candidatos[4].votos = candidatos[4].votos + 1; 
		if (voto == 6) 
			candidatos[5].votos = candidatos[5].votos + 1; 
		if (voto == 7) 
			candidatos[6].votos = candidatos[6].votos + 1; 
		if (voto == 8) 
			candidatos[7].votos = candidatos[7].votos + 1; 
		if (voto == 9) 
			candidatos[8].votos = candidatos[8].votos + 1; 
		if (voto == 10) 
			candidatos[9].votos = candidatos[9].votos + 1; 
		if (voto == 11) 
			candidatos[10].votos = candidatos[10].votos + 1; 
		if (voto == 12) 
			candidatos[11].votos = candidatos[11].votos + 1; 
		if (voto == 13) 
			candidatos[12].votos = candidatos[12].votos + 1; 
		if (voto == 14) 
			candidatos[13].votos = candidatos[13].votos + 1; 
		if (voto == 15)
			candidatos[14].votos = candidatos[14].votos + 1; 
		if (voto == 16) 
			candidatos[15].votos = candidatos[15].votos + 1; 
		if (voto == 17) 
			candidatos[16].votos = candidatos[16].votos + 1; 
		if (voto == 18) 
			candidatos[17].votos = candidatos[17].votos + 1; 
		if (voto == 19) 
			candidatos[18].votos = candidatos[18].votos + 1; 
		if (voto == 20) 
			candidatos[19].votos = candidatos[19].votos + 1; 
	}
	
	while (urna2.good()) {
		urna2 >> voto;
		if (voto == 1) 
			candidatos[0].votos = candidatos[0].votos + 1; 
		if (voto == 2) 
			candidatos[1].votos = candidatos[1].votos + 1;
		if (voto == 3) 
			candidatos[2].votos = candidatos[2].votos + 1; 
		if (voto == 4) 
			candidatos[3].votos = candidatos[3].votos + 1; 
		if (voto == 5) 
			candidatos[4].votos = candidatos[4].votos + 1; 
		if (voto == 6) 
			candidatos[5].votos = candidatos[5].votos + 1; 
		if (voto == 7) 
			candidatos[6].votos = candidatos[6].votos + 1; 
		if (voto == 8) 
			candidatos[7].votos = candidatos[7].votos + 1; 
		if (voto == 9) 
			candidatos[8].votos = candidatos[8].votos + 1; 
		if (voto == 10) 
			candidatos[9].votos = candidatos[9].votos + 1; 
		if (voto == 11) 
			candidatos[10].votos = candidatos[10].votos + 1; 
		if (voto == 12) 
			candidatos[11].votos = candidatos[11].votos + 1; 
		if (voto == 13) 
			candidatos[12].votos = candidatos[12].votos + 1; 
		if (voto == 14) 
			candidatos[13].votos = candidatos[13].votos + 1; 
		if (voto == 15)
			candidatos[14].votos = candidatos[14].votos + 1; 
		if (voto == 16) 
			candidatos[15].votos = candidatos[15].votos + 1; 
		if (voto == 17) 
			candidatos[16].votos = candidatos[16].votos + 1; 
		if (voto == 18) 
			candidatos[17].votos = candidatos[17].votos + 1; 
		if (voto == 19) 
			candidatos[18].votos = candidatos[18].votos + 1; 
		if (voto == 20) 
			candidatos[19].votos = candidatos[19].votos + 1; 
	}

	while (urna3.good()) {
		urna3 >> voto;
		if (voto == 1) 
			candidatos[0].votos = candidatos[0].votos + 1; 
		if (voto == 2) 
			candidatos[1].votos = candidatos[1].votos + 1;
		if (voto == 3) 
			candidatos[2].votos = candidatos[2].votos + 1; 
		if (voto == 4) 
			candidatos[3].votos = candidatos[3].votos + 1; 
		if (voto == 5) 
			candidatos[4].votos = candidatos[4].votos + 1; 
		if (voto == 6) 
			candidatos[5].votos = candidatos[5].votos + 1; 
		if (voto == 7) 
			candidatos[6].votos = candidatos[6].votos + 1; 
		if (voto == 8) 
			candidatos[7].votos = candidatos[7].votos + 1; 
		if (voto == 9) 
			candidatos[8].votos = candidatos[8].votos + 1; 
		if (voto == 10) 
			candidatos[9].votos = candidatos[9].votos + 1; 
		if (voto == 11) 
			candidatos[10].votos = candidatos[10].votos + 1; 
		if (voto == 12) 
			candidatos[11].votos = candidatos[11].votos + 1; 
		if (voto == 13) 
			candidatos[12].votos = candidatos[12].votos + 1; 
		if (voto == 14) 
			candidatos[13].votos = candidatos[13].votos + 1; 
		if (voto == 15)
			candidatos[14].votos = candidatos[14].votos + 1; 
		if (voto == 16) 
			candidatos[15].votos = candidatos[15].votos + 1; 
		if (voto == 17) 
			candidatos[16].votos = candidatos[16].votos + 1; 
		if (voto == 18) 
			candidatos[17].votos = candidatos[17].votos + 1; 
		if (voto == 19) 
			candidatos[18].votos = candidatos[18].votos + 1; 
		if (voto == 20) 
			candidatos[19].votos = candidatos[19].votos + 1; 

	}

	while (urna4.good()) {
		urna4 >> voto;
		if (voto == 1) 
			candidatos[0].votos = candidatos[0].votos + 1; 
		if (voto == 2) 
			candidatos[1].votos = candidatos[1].votos + 1;
		if (voto == 3) 
			candidatos[2].votos = candidatos[2].votos + 1; 
		if (voto == 4) 
			candidatos[3].votos = candidatos[3].votos + 1; 
		if (voto == 5) 
			candidatos[4].votos = candidatos[4].votos + 1; 
		if (voto == 6) 
			candidatos[5].votos = candidatos[5].votos + 1; 
		if (voto == 7) 
			candidatos[6].votos = candidatos[6].votos + 1; 
		if (voto == 8) 
			candidatos[7].votos = candidatos[7].votos + 1; 
		if (voto == 9) 
			candidatos[8].votos = candidatos[8].votos + 1; 
		if (voto == 10) 
			candidatos[9].votos = candidatos[9].votos + 1; 
		if (voto == 11) 
			candidatos[10].votos = candidatos[10].votos + 1; 
		if (voto == 12) 
			candidatos[11].votos = candidatos[11].votos + 1; 
		if (voto == 13) 
			candidatos[12].votos = candidatos[12].votos + 1; 
		if (voto == 14) 
			candidatos[13].votos = candidatos[13].votos + 1; 
		if (voto == 15)
			candidatos[14].votos = candidatos[14].votos + 1; 
		if (voto == 16) 
			candidatos[15].votos = candidatos[15].votos + 1; 
		if (voto == 17) 
			candidatos[16].votos = candidatos[16].votos + 1; 
		if (voto == 18) 
			candidatos[17].votos = candidatos[17].votos + 1; 
		if (voto == 19) 
			candidatos[18].votos = candidatos[18].votos + 1; 
		if (voto == 20) 
			candidatos[19].votos = candidatos[19].votos + 1; 
	}

	int maisvotos = -1;
	string maisvotado;
	for (i=0; i<20; i++) {
		if (candidatos[i].votos > maisvotos) {
			maisvotos = candidatos[i].votos;
			maisvotado = candidatos[i].nome;
		}
	}
	
	int menosvotos = candidatos[0].votos;
	string menosvotado;
	for (i=0; i<20; i++) {
		if (candidatos[i].votos < menosvotos) {
			menosvotos = candidatos[i].votos;
			menosvotado = candidatos[i].nome;
		}
	}

	int total = 0;
	for (i=0; i<20; i++) {
		total = candidatos[i].votos + total;
	}

	float porcentagem;
	porcentagem = (float) (100 * maisvotos) / total;

	cout << "O candidato mais votado foi: " << maisvotado << ", com " << maisvotos << " votos." << endl;
	cout << porcentagem << "% " << "sobre o total." << endl;
	cout << "O candidato menos votado foi: " << menosvotado << ", com " << menosvotos << " votos." << endl;
	

	cout << "Fechando arquivos..." << endl;
	arq.close();
	urna1.close();
	urna2.close();
	urna3.close();	
	
	return 0;
}
