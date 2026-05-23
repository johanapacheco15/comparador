#include <iostream>
#include <string>
using namespace std;

int main(){
	string usuario, password;
	const string user = "Hola";
	const string pass = "1234";
	const int intentos = 3;
	int contador = 0;
	
	for(int intento= 1; intento<= intentos; intento++){
	cout << "Intento "<< intento << " de " << intentos<<endl;
	cout << "Ingrese su usuario y contraseña\n"<<endl;
	cin >> usuario;
	cin >> password;
	if(usuario == user && password == pass){
		cout << "Bienvenido. Acceso concedido"<<endl;
		return 0;
	} else {
		if (intento < intentos){
			cout << "Datos incorrectos"<<endl;
		}else{
			cout << "Usuario o contraseña no validos."<<endl;
			cout << "Ha agotado sus 3 intentos"<<endl;
			return 1;
		}
	}
}
return 0;
}
