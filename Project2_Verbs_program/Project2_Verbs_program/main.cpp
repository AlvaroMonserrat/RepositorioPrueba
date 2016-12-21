/*Descripción del programa:
Tomar un verbo en ingles por parte del usuario (input) y imprimir (output) el verbo ingresado en pasado.
Se aceptan verbos regulares y verbos irregulares:
e.i play -> played
e.i be -> was
*/


#include <iostream>
#include <string>

using namespace std;

class verb {
protected:
	string root;
public:
	string getRoot() {
		return root;
	}
	virtual string past_tense() = 0; // Pure virtual function -> La clase 'verb' se transforma en una abstract class
};

class regular :public verb {

public:
	regular(string rt){
		root = rt;
	}

	string past_tense() {
		return root + "ed";
	}

};

class irregular :public verb {
	string pt;
public:
	irregular(string rt, string p) {
		root = rt;
		pt = p;
	}
	
	string past_tense() {
		return pt;
	}

	
};

int main() {

	verb *v1;

	regular r[2] = { regular("Play"), regular("Watch")};
	irregular ir[3] = { irregular("is", "was"), irregular("go", "went"), irregular("speak", "spoke") };

	string query;

	string s1 = "Hello man!";
	string::iterator it = s1.begin();

	

	do {

		cout << "Ingrese el verbo a encontrar: " << endl;
		cin >> query;
		bool found = false;

		//Loop para encontrar el verbo regular
		for (int i = 0; i < 2; i++)
		{
			v1 = &r[i];
			if (v1->getRoot() == query)
			{
				cout << "Past tense of ";
				cout << v1->getRoot() << "is ";
				cout << v1->past_tense() << endl;
				found = true;
				break;
			}
		}

		if (found == true) {
			continue; // Preguntar al usuario por un nuevo verbo
		}

		for (int i = 0; i < 3; i++)
		{
			v1 = &ir[i];
			if (v1->getRoot() == query)
			{
				cout << "Past tense of ";
				cout << v1->getRoot() << "is ";
				cout << v1->past_tense() << endl;
				found = true;
				break;
			}
		}

		if (found == false) {
			cout << "Verbo no encontrado" << endl;
		}

	} while (true);



	getchar();
	
	return 0;
}