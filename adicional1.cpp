#include<iostream>
using namespace std;
void inicio () {

    int opciones;
    bool condicion = true;

    while (condicion)
    {
        cout <<"======  WELCOME TO FIORELA'S SUPERSTORE ======="<<endl;
        cout << "1. iniciar sesion"<<endl;
        cout << "2. crear cuenta"<<endl;
        cout << "3. salir"<<endl;

        cin>>opciones;

        if (opciones > 3) {
            cout<<"no existe esa opcion"<<endl;
            continue;
        }

        if (opciones == 3) {
            cout << "gracias por su visita"<<endl;
            condicion = false;
        }
    }
}