#include "carro.h" 

Carro()::Carro(string _marca, int _quilometragem) {
	marca = _marca;
	quilometragem = _quilometragem;

	m = new Motor (2.0, 45);
	
	for (int i=0; i<4; i++)
		p[i] = new Pneu("Michellin", 32);
}

void Carro()::setQuilometragem(int _quilometragem) {
	quilometragem = _quilometragem;

}

int Carro()::getQuilometragem(){
	return quilometragem;
	
}

string Carro()::getMarca() {
	return marca;
}

void Carro()::desloca(int _kms) {
	//consumo médio do carro = 10km/litro
	
	//TRATAMENTO DO CONSUMO DE COMBUSTÍVEL
	float ltsNecessarios;
	int maxKM = _kms;

	ltsNecessarios = maxKM/10;
	if (m->getTanque() < ltsNecessarios) {
		maxKM = m->getTanque()*10;
		ltsNecessarios = m=->getTanque();
	}
	
	m->setTanque(m->getTanque()-ltsNecessarios);
	
	//TRATAMENTO DA PRESSAO DOS PNEUS
	for (int i=0;i<4;i++) 
		p[i]->setPressao(rand()%33);
	
	//ACRESCENTANDO KMS AO CARRO
	quilometragem +=maxKM;
}

void Carro()::abastece(float _lts, int _pressao) {
	if(_lts+m->getTanque()>55) {
		m->setTanque(_lts-m->getTanque());
		cout << "Abastecidos " << _lts-m->getTanque() << "lts" << endl;
	}
	else {
		m->setTanque(55);
}

void Carro()::print() {
	cout << "Automóvel" << endl;
	cout << "	Marca: " << marca << endl;
	cout << "	KM: " << quilometragem << endl;
	cout << "Motor: " << endl;
	cout << "	Potência: " << m->getPotencia() << endl;
	cout << "	Litragem: " << m->getTanque() << endl;
	cout << "Pneus:" << endl;
	for (int i=0; i<4; i++) {
		cout << "	Pneu (" << i << ")" << endl;
		cout << "		Marca: " << p[i]->getMarca() << endl;
		cout << "		Pressão: " << p[i]->getPressao() <, endl;	
	}
}

