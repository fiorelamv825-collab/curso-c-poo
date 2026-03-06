#include <iostream>
using namespace std;
void cambio(char* p ) { // resive una direccion de memoria donde almacena en puntero p
      *p = 'z'; // todo lo q le pase cambia al valor de z
}

 int main() {
    char nombre[8] = "fiorela"; //  [] indice 
    
    //punteros
    char *a = &nombre[6];//direcion de memoria de un arreglo 0.
    char *b = &nombre [1];
    char *c = &nombre[2]; 

    for (int i = 0; i < 8; i++)
    {
        
    
        cambio(&nombre[i]); // llamo a la funcion cambio 
        
    }
      cout << nombre ;
    
    return 0;

}