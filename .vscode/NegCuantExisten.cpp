/*
 *      Ejercicio 4: Negación de Cuantificador Existencial
 *      Equivalencia:
 *      ¬(∃x P(x)) ≡ ∀x ¬P(x)
 *      con P(x): x es múltiplo de 3, x ∈ {2,4,5,7}.
 */
#include <iostream>
using namespace std;

int main() {
    int conjunto[] = {2,4,5,7};
    bool existeMultiplo3 = false;
    bool todosNoMultiplo3 = true;

    for(int x : conjunto){
        if(x % 3 == 0) existeMultiplo3 = true; // existe un múltiplo de 3
        if(x % 3 == 0) todosNoMultiplo3 = false; // rompe el universal
    }

    cout << "¿Existe múltiplo de 3? " << (existeMultiplo3 ? "Sí" : "No") << endl;
    cout << "¿Todos no son múltiplos de 3? " << (todosNoMultiplo3 ? "Sí" : "No") << endl;
}