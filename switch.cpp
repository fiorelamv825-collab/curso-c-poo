#include <iostream>
using namespace std;

int main() {
    int opciones;

    int numero1;
    int numero2;

     int resultado1;

    cout<<"ingrese la operacion que desea hacer: "<<endl;
    cout<<"1 : suma" <<endl ;
    cout<<"2 : resta" <<endl ;
    cout<< "3 : multplicacion"<<endl ;
    cout <<"4 : division"<<endl;
    cin>> opciones;

     cout<<"ingrese el primer numero: ";
    cin>> numero1;

    cout<<"ingrese el segundo numero: ";
    cin>> numero2;

   switch (opciones)
   {
   case 1 :
    
    resultado1= numero1 + numero2;

     cout<<"resultado: "<<resultado1;
    break;

   case 2 :
    
    resultado1= numero1 - numero2;

     cout<<"resultado: "<<resultado1;
    break;

    case 3 :

    resultado1= numero1 * numero2;

     cout<<"resultado: "<<resultado1;
    break;

    case 4 :
     if(numero2!=0) {

     
    resultado1= numero1/numero2;

     cout<<"resultado: "<<resultado1;}
     else{
        cout<<"no exite eso";
     }
    break; 
    default: 
    cout<<"no existe esa opcion: ";
        break;
    }
    return 0;
}