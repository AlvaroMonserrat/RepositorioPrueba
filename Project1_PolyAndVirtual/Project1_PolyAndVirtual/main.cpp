#include <iostream>

using namespace std;


class base {
public:
	int id;
	float balance;

	void print() { printInfo(); }
	virtual void printInfo() {
		cout << "Data base" << endl;
	}
};

class savings: public base {
public:
	int age;
	long int ATM;

	void printInfo() {
		cout << "Data savings" << endl;
	}
};

class current : public base {
public:
	int amount;
	int overdraft;

	void printInfo() {
		cout << "Data current" << endl;
	}
};

int main() {

	base b;
	savings s;
	current c;

	base *bptr;

	//printInfo: Data base ----> NO printInfo: Data saving 
	//Si en la clase base se utiliza como virtual para printInfo: entonces se imprime lo que corresponde a la clase derivada
	bptr = &s;
	bptr->printInfo();

	//printInfo: Data base ----> NO printInfo: Data current
	bptr = &c;
	bptr->printInfo();

	//funcion print() --> virtual entrega "multiples salidas" con una misma funcion
	b.print();
	s.print();
	c.print();

	getchar();

	return 0;
}