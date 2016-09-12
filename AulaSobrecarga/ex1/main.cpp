#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct PONTO {
	int x, y;
	PONTO operator+ (PONTO &v1);
	PONTO operator* (PONTO &V1);
	void operator= (int n);
	void operator! ();
	void Imprime();
} PONTO;

void PONTO::operator! ()
{
    printf("(%d,%d)", x,y);
}

void PONTO::operator= (int n)
{
       x = n;
       y = n;
}

PONTO PONTO::operator+ (PONTO &v1)
{
       PONTO temp;
       temp.x = v1.x + x;
       temp.y = v1.y + y;
       return temp;
}

PONTO PONTO::operator* (PONTO &v1)
{
       PONTO temp;
       temp.x = v1.x * x;
       temp.y = v1.y * y;
       return temp;
}

ostream& operator<< (ostream& out, PONTO &v1) {
	out << "X= " << v1.x <<"; Y= " << v1.y << endl;
	return out;
}

istream& operator>> (istream& in, PONTO &v1) {
	int x;
	in >> x;
	v1 = x;
	return in;
}

int main(void) 
{
	PONTO a;

	cout << a << endl;
	cin >> a;
	cout << a << endl;
	
	return 0;
}
