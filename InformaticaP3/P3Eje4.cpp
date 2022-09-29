#include<iostream>
using namespace std;
int main(){
	int n1, n2, C;
	cout<<"Ingresar el primer numero:";
	cin>>n1;
	cout<<"Ingresar el segundo numero: ";
	cin>>n2;
	C = n1;
	while (C > n2){
		cout<< C << endl;
		C--;
	}
return 0;
}
