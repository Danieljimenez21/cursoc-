/*ejercicio 10 escriba un programa que calcule el valor de 1!+2!
...+n!(Suma de factoriales)*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int factorial=1, suma=0, numero;

    cout<<"Ingrese un numero: "; cin>>numero;

    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
        suma += factorial;
    }
    
    cout<<"La suma de los factoriales es: "<<suma;


    return 0;
}