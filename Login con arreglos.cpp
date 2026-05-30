#include <iostream>
#include <string>
using namespace std;

int main() {

    // 10 usuarios registrados
    string usuarios[10]={
        "Johana",
        "Jazmin",
        "Kevin",
        "Karla",
        "Luis",
        "Juan",
        "Kuina",
        "Iñaki",
        "Gabriel",
        "Miguel"
    };

    // 10 contraseñas registradas
    string contrasenas[10]={
        "1783",
        "abcd",
        "j1239",
        "ad233",
        "a234",
        "p546",
        "s457",
        "ca4747",
        "204855",
        "5589661"
    };

    string usuario, contrasena;

    // Variable para verificar si se encuentra el usuario
    bool acceso = false;
    const int MAX = 3;
    for (int intento = 1; intento <= MAX; intento++) {

        cout << "\n========== INICIAR SESION ==========\n";

        cout << "Ingresa tu usuario y contraseña"<<endl;
        cin >> usuario;
        cin >> contrasena;
        
        //Bucle para ingresar los usuarios
        for (int i = 0; i < 10; i++) {
            if (usuario == usuarios[i] &&
                contrasena == contrasenas[i]) {
                acceso = true;
            } }

        // Usamos un if para determinar si el usuario y la contaseña son correctos 
        if (acceso == true) {
            cout << "\nBienvenido al sistema\n";
            return 0;
        }
        else {
            cout << "\nUsuario o contrasena incorrectos\n";
            cout << "Te quedan " << MAX - intento << " intentos\n";
        }
    }
    cout << "\n ACCESO BLOQUEADO";
    return 0;
}
