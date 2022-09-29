#include "iostream"
#include "string"
using namespace std;

int main()
{
	string titulos [5];
	string autores [5];
	cout << "Por favor ingrese la siguiente información de los Libros: \n";
	for (int i = 0; i < 5; i++)
	{
	cout << "\n******* Libro " << 1 + 1 << "********: \n";
	cout << "Titulo: ";
	//cin >> titulos[i]; //No funciona con espacios
	getline (cin, titulos[i]);
	cout << "Autor: ";
	//cin >> autores[1]; //No funciona con espacios
	getline (cin, autores[i]);
	}
}
