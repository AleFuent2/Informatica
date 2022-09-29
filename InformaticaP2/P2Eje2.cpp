#include <iostream>
using namespace std;

long potenciaDe(int base, int exponente);

int main(){
int Base, Exponente;
long Resultado;
cout<<"ingresa la base: ";cin>>Base;
cout<<"ingresa el exponente: "; cin>>Exponente;
Resultado = potenciaDe(Base, Exponente);
cout<<"El resultado es: "<<Resultado<<endl;
return 0;
}

long potenciaDe(int Base, int Exponente){
if(Exponente != 1){
	return Base * potenciaDe(Base, Exponente - 1);
}else{
	return Base;
}
}
