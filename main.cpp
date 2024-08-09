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

switch (caso) {  //sentecia switch y condicional caso.
        case 1: {
        registrarUsuario();
        int usu;
        cout << "\n1. alumno" << endl;
        cout << "\n2. docente" << endl;
        cout << "\n3. admin" << endl;
        cout << "Ingrese una opcion (1,2 o 3): ";
        cin >> usu;
    
     if ( usu==1){   //condicional if, else if.
              cout<<" \n!Bienvenido Alumno!"<<endl;
		}else {
		if(usu==2){	
	        cout<<" \n!Bienvenido Docente!"<<endl;
		}else {
		if(usu==3){
		cout<<" \n!Bienvenido Administrador!"<<endl;
	}
      }
     }
    }
          break;

    case 2: {   //caso2, cuando el usuario ya esta almacenado.
            string username, password;

            cout << "Ingrese el nombre de usuario: ";
            cin >> username;
            cout << "Ingrese la contrasena: ";
            cin >> password;
            
            if ((lista[0].username== username) ){
            	cout<<"\nEs correcto";
            	cout << "\nInicio de sesion exitoso." << endl;
            
              int a;
              cout<<" \n!Bienvenido Alumno!"<<endl;
              cout<<"1.opcion1"<<endl;
              cout<<"2.opcion2"<<endl;
              cout<<"3.opcion3"<<endl;
              cin>>a;
        
