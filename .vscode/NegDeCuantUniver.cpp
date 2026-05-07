/*
 *      Ejercicio 3: Negación de Cuantificador Universal
 *      Equivalencia:
 *      ¬(∀x P(x)) ≡ ∃x ¬P(x)
 *
 *      con P(x): x < 10, x ∈ {5, 8, 12}.
 */
#include <iostream>
using namespace std;

int main() {
    int conjunto[] = {5, 8, 12};
    bool todosMenores = true;
    bool existeMayor = false;

    for(int x : conjunto){
        if(!(x < 10)) todosMenores = false; // falla universal
        if(x >= 10) existeMayor = true;     // cumple existencial
    }

    cout << "¿Todos menores que 10? " << (todosMenores ? "Sí" : "No") << endl;
    cout << "¿Existe alguno mayor o igual a 10? " << (existeMayor ? "Sí" : "No") << endl;
}