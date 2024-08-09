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
