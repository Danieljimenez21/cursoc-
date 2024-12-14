/*Escribe un programa que defina un vector de numeros y muestre
en la salida estandar el vector en orden inverso - del ultimo
al primero */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[5] = {1,2,3,4,5};

    for(int i = 4; i >=0; i--){
        cout<<numeros[i]<<endl;
    }

    return 0;
}