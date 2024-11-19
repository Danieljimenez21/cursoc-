#include <iostream>
#include <limits> // Para obtener los valores mínimos y máximos posibles
using namespace std;

int main() {
    const int lecturas = 6; // Número de lecturas en 24 horas (cada 4 horas)
    double temperatura, sumaTemperaturas = 0, temperaturaMaxima, temperaturaMinima;

    // Inicializamos las variables de temperatura máxima y mínima
    temperaturaMaxima = numeric_limits<double>::lowest(); // El menor valor posible
    temperaturaMinima = numeric_limits<double>::max();    // El mayor valor posible

    // Lectura de las temperaturas
    cout << "Ingrese las temperaturas registradas cada 4 horas:" << endl;
    for (int i = 0; i < lecturas; i++) {
        cout << "Temperatura #" << i + 1 << ": ";
        cin >> temperatura;

        // Acumulamos la suma para calcular el promedio
        sumaTemperaturas += temperatura;

        // Comparamos para encontrar la máxima
        if (temperatura > temperaturaMaxima) {
            temperaturaMaxima = temperatura;
        }

        // Comparamos para encontrar la mínima
        if (temperatura < temperaturaMinima) {
            temperaturaMinima = temperatura;
        }
    }

    // Cálculo del promedio
    double temperaturaMedia = sumaTemperaturas / lecturas;

    // Resultados
    cout << "\nResultados del día:" << endl;
    cout << "Temperatura media: " << temperaturaMedia << "°C" << endl;
    cout << "Temperatura más alta: " << temperaturaMaxima << "°C" << endl;
    cout << "Temperatura más baja: " << temperaturaMinima << "°C" << endl;

    return 0;
}
