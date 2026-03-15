#include<iostream>
using namespace std;
 int main() {
    int numero;
    cout<< "======================================"<<endl;
    cout <<"bienvenido al identificador de numeros"<<endl;
    cout<< "======================================"<<endl;

    cout <<" Ingrese el numero que desea identificar: "<<endl;
    cin >> numero;

    if (numero > 0)
    {
       cout <<"El numero es positivo "<<endl;
    } else if (numero <0)
    {
      cout << "El numero es negativo "<<endl;
    }else
    {
        cout  <<"El numero que ingreso es neutro "<<endl;
    }

    return 0;
 }