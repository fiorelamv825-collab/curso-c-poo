#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N, Q;
    int caso = 1;

    while (true) {

        cout << "\n===================================" << endl;
        cout << "        BUSQUEDA DE CANICAS        " << endl;
        cout << "===================================" << endl;

        // Pedir cantidad de canicas
        cout << "\nIngrese la cantidad de canicas: ";
        cin >> N;

        // Pedir cantidad de consultas
        cout << "Ingrese la cantidad de consultas: ";
        cin >> Q;

        // Finalizar programa
        if (N == 0 && Q == 0) {

            cout << "\nPrograma finalizado." << endl;
            break;
        }

        int canicas[10000];

        cout << "\nIngrese los numeros de las canicas:" << endl;

        // Pedir canicas una por una
        for (int i = 0; i < N; i++) {

            cout << "Canica #" << i + 1 << ": ";
            cin >> canicas[i];
        }

        // Ordenar las canicas
        sort(canicas, canicas + N);

        cout << "\n========== CASO #"
             << caso
             << " ==========" << endl;

        // Mostrar canicas ordenadas
        cout << "\nCanicas ordenadas: ";

        for (int i = 0; i < N; i++) {
            cout << canicas[i] << " ";
        }

        cout << endl;

        // Realizar consultas
        for (int i = 0; i < Q; i++) {

            int buscar;

            cout << "\nConsulta #" << i + 1 << endl;
            cout << "Ingrese numero a buscar: ";
            cin >> buscar;

            bool encontrado = false;

            // Buscar primera aparición
            for (int j = 0; j < N; j++) {

                if (canicas[j] == buscar) {

                    cout << buscar
                         << " encontrado en la posicion "
                         << j + 1
                         << endl;

                    encontrado = true;

                    break;
                }
            }

            // Si no se encontró
            if (!encontrado) {

                cout << buscar
                     << " no encontrado"
                     << endl;
            }
        }

        caso++;
    }

    return 0;
}