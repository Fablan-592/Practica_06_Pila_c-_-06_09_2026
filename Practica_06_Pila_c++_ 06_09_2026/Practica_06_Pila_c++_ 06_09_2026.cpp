#include <iostream>
#include <vector>
using namespace std;

void aniadir(vector<char> & nombres,int capacidad, char nom) {
	if (nombres.size() >= capacidad) {
		cout << "la pila ya está llenita" << endl; 
	}
	else {
		cout << "Ingrese tu letra inicial en la pila: ";
		cin >> nom;
		nombres.push_back(nom);
	}
}

void imprimir(vector<char> & nombres){
	for (int i = 0; i < nombres.size(); i++) {
		cout << nombres[i] << endl;
	}
}

void quitar(vector<char>& nombres){
	nombres.pop_back();
}

int main() {
	char nom = ' ';
	int capacidad, opcion;
	opcion = 0; 
	cout << "Ingrese la capacidad que tendrá la pila: ";
	cin >> capacidad;
	vector <char> nombres;
	while (opcion != 4) {
		cout << "Opcion 1: aniadir elemento" << endl;
		cout << "Opcion 2: quitar elemento" << endl; 
		cout << "Opcion 3: imprimir pila" << endl;
		cout << "Opcion 4: Salir " << endl;
		cin >> opcion;
		cout << endl;
		if (opcion == 1) {
			aniadir(nombres, capacidad, nom);
		}
		else if (opcion == 2) {
			quitar(nombres);
		}
		else if (opcion == 3) {
			imprimir(nombres);
		}
		else {
			break;
		}
	}
}