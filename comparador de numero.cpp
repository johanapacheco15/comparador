#include <iostream>
using namespace std;

int main(){
	int numero1, numero2, numero3, mayor, menor;
	
	cout <<"Comparador de numeros"<<endl;
	cout <<"Ingresa un numero entero\n";
	cin >>numero1;
	cout <<"Ingresa un segundo numero\n";
	cin>>numero2;
	cout <<"Ingresa un tercer numero\n";
	cin>>numero3;
	
	if (numero1>=numero2 && numero1>=numero3){
		mayor = numero1;
	}
	else if (numero2>=numero1 && numero2>=numero3){
		mayor = numero2;
	}
	else{
		mayor = numero3;
	}
	
	if (numero1<=numero2 && numero1<=numero3){
		menor = numero1;
	}
	else if(numero2<=numero1 && numero2<=numero3){
		menor = numero2;
	}
	else{
		menor = numero3;
	}
	cout<<"Resultado"<<endl;
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;
	
	return 0;
}
