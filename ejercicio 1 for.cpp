//Haz un programa que muestre la tabla de multiplicar de un número.
 #include <iostream>
 using namespace std;

 int main (){
    int tabla;
    cout <<"======================"<<endl;
    cout <<"tabla de multiplicar"<<endl;
    cout <<"======================"<<endl;

    cout<<"ingrese la tabla de multiplicar que quiere: "<<endl;
    cin>> tabla;
    cout<< "tabla de multiplicar"<<endl;

    for (int i = 0; i <= 12; i++)
    {
       cout<<tabla<<"x"<< i<<" = " << i*tabla <<endl; //Encadenamiento del operador de inserción
    }
    return 0;
 }