/*Ejercicio 12. Hacer un programa que calcule el resultado 
de la siguiente expreison: 1+2+3+4+5..n*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    float n, suma = 0; // Inicializamos 'suma' en 0

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Cambié '<' a '<=' para incluir n
        if (i % 2 == 0) {
            suma -= i; // Restamos los números pares
        } else {
            suma += i; // Sumamos los números impares
        }
    }

    cout << "La suma alternada de los primeros " << n << " números es: " << suma << endl;

    return 0;
}
