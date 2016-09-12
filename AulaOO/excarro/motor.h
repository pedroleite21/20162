#ifndef __MOTOR_H__
#define __MOTOR_H__

class Motor {
	private:
		float tanque;		
		float potencia;
	public:
		Motor(float _potencia=-1.0, float _tanque=0);
		void setTanque(float _volume);
		float getPotencia();
		float getTanque();
};

#endif
