/*
 * Ejercicio 2: Cuantificador Existencial
 *  Proposición:
 *  Ǝ x∈{1,2,3,4,5}, x^2≥0

 */
#include <iostream>
using namespace std;

int main() {
    int conjunto[] = {1,2,3,4,5};
    bool existe = false; // asumimos que no existe

    for(int x : conjunto){
        if(x*x < 0){ // condición lógica: x^2 >= 0
            existe = true;
            break; // basta un contraejemplo para negar el universal
        }
    }

    if(existe) cout << "Existe al menos un numero par. \n";
    else cout << "No existe ningun numero par .\n";
}