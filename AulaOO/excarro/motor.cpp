#include "motor.h"

Motor::Motor(float _potencia, float _tanque) {
	potencia = _potencia;
	tanque = _tanque;
}

void Motor::setTanque(float _volume) {
	tanque = _volume;
}

float Motor::getTanque() {
	return tanque;
}

float Motor::getPotencia() {
	return potencia;
}
