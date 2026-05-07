/*
 *
 * Ejercicio 5: Funciones proposicionales
 * Proposición:
 *    ∀x ∈ {2,3,4,5,6}, P(x)
 * donde
 *    P(x): x es primo.
 *
 */

#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int conjunto[] = {2,3,4,5,6};
    bool todosPrimos = true;

    for(int x : conjunto){
        if(!esPrimo(x)){ // si alguno no es primo, falla el universal
            todosPrimos = false;
            break;
        }
    }

    if(todosPrimos)
        cout << "Todos los números son primos.\n";
    else
        cout << "No todos los números son primos.\n";
}