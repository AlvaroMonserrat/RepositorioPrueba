#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> intVec;

	cout << "Size of intVec N0 : " << intVec.size() << endl;

	for (int i = 0; i < 5; i++)
	{
		intVec.push_back(i);
	}

	cout << "Size of intVec N1 : " << intVec.size() << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << intVec.at(i) << " ";
	}
	
	cout << endl;

	//Insertar un valor en el vector intVec
	vector<int>::iterator it = intVec.begin() + 2;
	intVec.insert(it, 0); // Inserta el 0 -> [0 1 0 2 3 4]

	cout << "Size of intVec N2 : " << intVec.size() << endl;

	for (int i = 0; i < intVec.size(); i++)
	{
		cout << intVec.at(i) << " ";
	}

	cout << endl;

	//Eliminar un elemento del vector intVec
	it = intVec.begin() + 3;
	intVec.erase(it);

	cout << "Size of intVec N3 : " << intVec.size() << endl;

	for (int i = 0; i < intVec.size(); i++)
	{
		cout << intVec.at(i) << " ";
	}
	cout << endl;

	

	getchar();



	return 0;
}