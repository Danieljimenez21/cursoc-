/*3. Realice un programa que calcule y mestre en la salida
estandar la suma de los cuadrados de los 10
primeros numeros*/


#include<iostream>

using namespace std;

int main(){
    int suma=0, cuadrado;
    for (int i=1; i<=10; i++ ){
    cuadrado = i * i;
    suma += cuadrado;
    }

    cout<<"El resultado es: "<<suma<<endl;

    return 0;
}


