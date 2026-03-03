#include <iostream>
using namespace std;

int calcular (int opcion, int numero1, int numero2){
    int resultado; 
    
if (opcion == 1) {
    resultado = numero1 + numero2;
    }
    else if (opcion == 2) {
    resultado = numero1 - numero2;
    }
    else if (opcion == 3) {
    resultado = numero1 * numero2;
    }
    else if (opcion == 4) {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            cout << "no se puede dividir entre 0 p" << endl;
            return 0;
        }
    }else {
        cout << "esta mal" << endl;
        return 0;

    }  
    return resultado;
}

int main()  { 
    int opcion; 
    int numero1;
    int numero2;
    int resultado;
    bool condicion = true;
    
     while (condicion)
     {
        cout<<"ingrese la operacion que desea hacer: "<<endl;
        cout<<"1 : suma" <<endl ;
        cout<<"2 : resta" <<endl ;
        cout<< "3 : multplicacion"<<endl ;
        cout <<"4 : division"<<endl;
        cout<< "5: salir "<<endl;
        cin>> opcion;

        cout<<"ingrese el primer numero: ";
        cin>> numero1;

        cout<<"ingrese el segundo numero: ";
        cin>> numero2;
        resultado= calcular(opcion, numero1,numero2);
        //concatenacion OJO
        cout<<"el resultado es: "<<resultado<<endl;
    }
}