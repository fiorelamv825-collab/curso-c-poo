#include <iostream>
using namespace std;

int main() {
    int nota1=10;
    int nota2=21;
    
    int numero1; 
    int numero2;
    int numero3;
    int numero4;


    bool resultado1;
    bool resultado2;
    bool resultado3;
    bool notafinal;
    
    

    cout<<"ingrese la primera nota " ;
    cin>>numero1;

    resultado1 = (nota1 < numero1) && numero1 < nota2;

    if(resultado1) {
        cout << "aprobado " <<endl ;

    } else if  (resultado1){
       cout << "reprobado ";

    } else  {
        cout << "nota invalida" <<endl ;
    }

    
    cout<<"ingrese la segunda nota "<<endl ; 
    cin>>numero2;

    resultado2 = (nota1 < numero2 ) && numero2 < nota2;

    if(resultado2) {
        cout << "aprobado " <<endl;


    } else if  (resultado2){
       cout << "reprobado " <<endl;
    } else {
        cout << "nota invalida"<<endl;
    }
    cout<<"ingrese la tercera nota "<<endl; 
    cin>> numero3;
    resultado3 = (nota1 < numero3) && numero3 < nota2;

    if(resultado3) {
        cout << "aprobado "<<endl;

    } else if  (resultado3){
       cout << "reprobado "<<endl;
    } else {
        cout << "nota invalida";
    }

    //promedio de las tres notas 
    cout <<"nota final"<<endl;
    cin>> numero4;
    notafinal= numero1 + numero2 + numero3  / 3;

    if(notafinal) {
        cout << "aprobado "<<endl;

    } else if  (notafinal){
       cout << "reprobado "<<endl;
    } else {
       cout << "nota invalida";
    }



 return 0;
}