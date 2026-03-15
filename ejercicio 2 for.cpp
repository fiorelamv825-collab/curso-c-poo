#include <iostream>
using namespace std;

int main () {
     
    char inicial = 'A';
    cout <<"cuantas filas quieres: "<<endl;
    cin>>inicial;

    for (int i = 1; i <= inicial; i++) //controla filas ||
    {
       for (int j = 1; j < i ; j++)//imprime +
       {
        cout<<"+";
       }
       cout<<endl;
    }
    
    return 0; 
}