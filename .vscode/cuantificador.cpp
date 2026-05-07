/*
 *          Ejercicio 1: Cuantificador Universal
 *      Proposición:
 *      ∀ x∈{1,2,3,4,5}, x^2≥0
 
 */
#include <iostream>
using namespace std;

int main() {
    int conjunto[] = {1,2,3,4,5};
    bool cumple = true; // asumimos que todos cumplen

    for(int x : conjunto){
        if(x*x < 0){ // condición lógica: x^2 >= 0
            cumple = false;
            break; // basta un contraejemplo para negar el universal
        }
    }

    if(cumple) cout << "La proposicion universal es verdadera.\n";
    else cout << "La proposicion universal es falsa.\n";
}