#include <iostream>
#include <string>
#include <vector>

using namespace std;



template <class T> class Queue {

private:
	int front;
	int nWaiting;
	T Element[100];

public:
	//Constructor
	Queue() {
		front = 0;
		nWaiting = 0;
	}

	//Destructor
	~Queue()
	{
		return;
	}

	T getFirstElement()
	{
		return Element[0];
	}

	bool insert(T value);

};

template <class T> bool Queue<T>::insert(T value)
{
	if (nWaiting == 100)
	{
		cout << "Q Full!" << endl;
		return false;
	}
	else {
		Element[(front + nWaiting) % 100] = value;
		nWaiting++;
		return true;
	}
}



int main()
{

	Queue<double> taxi;

	taxi.insert(65);

	cout << "El taxi por salir es: " << taxi.getFirstElement() << endl;


	vector<int> intVec;
	vector<float> floatVec(20);
	vector<char> charVec(5, 'a');

	cout << intVec.size() << " ";
	cout << floatVec.size() << endl;

	for (int i = 0; i < 5; i++) {
		cout << charVec[i];
	}

	cout << endl;


	intVec.push_back(55);

	cout << "valor ingresado: " << intVec.at(0) << endl;
  
	getchar();

	return 0;
}

