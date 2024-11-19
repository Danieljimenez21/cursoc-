/*Ejercicio 2. Realice un programa que lea de la entrada
estandar numeros de hasta que se introduzca un cero.
en esse momento el programa debe terminar y 
mostar en la salida estandar el numero de valores
mayores que cero leidos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int num, conteo = 1;

    cout<<"Digite un numero: ";
    cin>>num;

    while (num != 0)
    {
        cout<<"Digite un numero: ";
        cin>>num;
        conteo = conteo + 1;
    }

    cout<<"La contidad de intentos fueron: "<<conteo;
    


    return 0;
}