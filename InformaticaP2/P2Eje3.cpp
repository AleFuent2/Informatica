#include <iostream>
using namespace std;

float calcularPerimetro (float); //Prototipo de función

int main() {
double lado;
cout << "Ingrese el lado del cuadrado: " << endl;
cin >> lado;
cout << "El perimetro del cuadrado es: " << calcularPerimetro(lado) ;
return 0;
}

float calcularPerimetro (float lado) {
	double perimetro = lado * 4;
return perimetro;
}
