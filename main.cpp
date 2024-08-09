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

