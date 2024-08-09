#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registrarUsuario(); //prototipo de la función

struct Usuario {    // Estructura para almacenar los datos del usuario
    string username; //cadena para aceptar varias palabras.
    string password;
    string userType;
};

void registrarUsuario() { // Función para registrar un nuevo usuario
    Usuario newUsua[20];  // Estructura, arreglo
    cout<<  "\n!Ingrese los datos del usuario! "<<endl;
    cout << "\nIngrese el nombre de usuario: ";
    cin >> newUsua[0].username;
    cout << "Ingrese la contrasena: ";
    cin >> newUsua[0].password;
    cout << "\nIngrese el tipo de usuario (alumno/docente/admin): ";
 };

int main() {   // Función principal
    
	int caso;
    cout << "1. Registrar nuevo usuario" << endl;  //opciones de caso
    cout << "2. Iniciar sesion" << endl;
    cout << "Ingrese una opcion (1 o 2): ";
    cin >> caso;
    Usuario lista[20];
 
    lista[0].username =  "juan";
    lista[0].password =  "123";
    
    lista[1].username =  "pedro";
    lista[1].password =  "234";
    
    lista[2].username =  "arturo";
    lista[2].password =  "135";

