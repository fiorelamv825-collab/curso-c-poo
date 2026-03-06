#include <iostream>
using namespace std;
int getdate(int dat) {
    int dateuser;
    cout<<"ingrese dato" <<dat << ":" ;
        cin>> dateuser;
     return dateuser;
}
int calcular (int opcion, int cantidad,int numero1,int numero2){
    int resultado=0;
    int operacion[cantidad];
    if (opcion == 1) { //opcion suma
        //almacenando datos en el arreglo
        for (int i = 0; i < cantidad ; i++)
        {
            operacion[i]= getdate(i + 1);
        }
        //calculando la suma total de suma
        for (int i = 0; i < cantidad; i++)
        {
            cout << operacion[i] <<",";
            resultado = operacion[i] + resultado;
        }
    
    }
    else if (opcion == 2) { // opcion resta
        resultado = numero1 - numero2;
    }
    else if (opcion == 3) {
        resultado=1;
        for (int i = 0; i < cantidad; i++)
        {

         operacion[i] = getdate(i + 1);
        }
    for (int i = 05; i < cantidad; i++)
    {
        cout << operacion[i] <<",";
        resultado = operacion[i] * resultado;
    }
    
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
    int cantidad;
    int resultado;
    int numero1;
    int numero2;
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

        if (opcion == 5)
        {
            cout << "gracias por usar nuestro sistema";
            break;
        }
        
        cout <<"ingrese la cantidad de numeros q desea realizar la operacion: ";
        cin >> cantidad; 
        //cout<<"ingrese el primer numero: ";
        //cin>> numero1;

        //cout<<"ingrese el segundo numero: ";
        //cin>> numero2;

        resultado= calcular (opcion,cantidad, numero1 , numero2);
        //concatenacion OJO
        cout<<"\nel resultado es: "<<resultado<<endl;
    }
}