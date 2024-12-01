/*Ejercicio 6. Escriba un programa que calule x^y donde tanto como
x como y son enteros porsitivos, sin utilizar la funcion pow*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int x=1, y, potencia=1;

    cout<<"Escriba el valor de x: ";cin>>x;
    cout<<"Escriba el valor de la potencia: ";cin>>y;

    for (int i = 1; i <= y; i++)
    {
        potencia = potencia * x;
    }
    
    cout<<"La potencia de los numeros es: "<<potencia;
    



    return 0;
}