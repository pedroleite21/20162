#include "data.h"

Data()::Data(int _dia, int _mes, int _ano) {
	dia = _dia;
	mes = _mes;
	ano = _ano;
}

int Data()::getDia(){
	return dia;
}

int Data()::getMes(){
	return mes;
}

int Data()::getAno(){
	return ano;
}

void Data()::setDia(int _dia){
	dia = _dia;
}

void Data()::setMes(int _mes){
	mes = _mes;
}

void Data()::setAno(int _ano){
	ano = _ano;
}

string Data()::toString(){
	return "getDia()/getMes()/getAno()"
}
