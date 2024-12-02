/*Ejercicio numero 16. Realice un programa que calcule la descomposicion
en factores primos de un numero entero*/
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int numero;

    //solicitar al usuario que ingrese un numero entero positivo 
    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    //validar que el numero sea maor que1

    if (numero<=1){
        cout << "El numero debe de ser mayor que 1" << endl;
        return 1; //finaliza el programa su el nuemro no es valido
    }

    cout<<"La descomposicion en factores primos de " <<numero<<" es: ";

    //factorizar el numero
    int divisor = 2;

    while (numero > 1)
    {
        while (numero % divisor == 0) // si es divisible es un factor primo
        {
            cout<<divisor;
            numero/=divisor;
            if (numero>1) cout << " x "; //imprimir x entre factores
        }
        divisor++; //probar con siguiente numero
    }
    
    cout << endl;
    return 0;
    


}