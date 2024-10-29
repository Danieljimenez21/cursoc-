/*escriba un programa que calcule las soluciones 
de segundo grado de la forma ax2+ bx + c teniendo en cuanta que*/

#include <iostream>
#include <cmath> // Para la función sqrt

int main() {
    double a, b, c;
    std::cout << "Introduce los valores de a, b y c: ";
    std::cin >> a >> b >> c;

    double discriminante = b * b - 4 * a * c;

    if (a == 0) {
        std::cout << "El valor de 'a' no puede ser cero en una ecuación cuadrática." << std::endl;
    } else if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Las soluciones son reales y distintas:\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        std::cout << "La solución es real y única:\n";
        std::cout << "x = " << x << "\n";
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminante) / (2 * a);
        std::cout << "Las soluciones son complejas y distintas:\n";
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i\n";
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
