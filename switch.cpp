#include <iostream>
using namespace std;

int main() {
    int opciones;
    bool condicion=true;

    int numero1;
    int numero2;

     int resultado1;


     while (condicion)
     {
        cout<<"ingrese la operacion que desea hacer: "<<endl;
    cout<<"1 : suma" <<endl ;
    cout<<"2 : resta" <<endl ;
    cout<< "3 : multplicacion"<<endl ;
    cout <<"4 : division"<<endl;
    cout<< "5: salir "<<endl;
    cin>> opciones;

    if (opciones == 5 ) {
        
    cout << "gracias por usar el programa" <<endl;
          condicion=false;
          break; 
          }  else if (opciones >=5)
          {
           cout << "INGRESE SOLO LOS NUMEROS Q APARECEN"<<endl;
           continue;
          }
          
     
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

    resultado1 = numero1/numero2;
        cout<<"resultado: "<<resultado1;}
     else{
        cout<<"no exite eso"<<endl;
        default: 
        break;
          } 

    } }
    return 0;
}