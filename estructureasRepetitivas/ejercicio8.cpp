/*Ejercicio 8. escriba un programa que calcule el valor 
de: 1+3+5+2n-1*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float n, suma=0;
    
    cout<<"Ingrese un numero: ";
    cin>>n;

   for (int i = 1; i <= 2 * n - 1; i += 2) {
    suma += i;
    }

    
    cout<<"El resultado es: "<<suma;

    return 0;
}