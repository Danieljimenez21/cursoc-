/*Escribe un programa que defina un vector de numeros y calcule la 
multiplicacion acumulada de los elementos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[]={1,2,3,4,5,6};
    int multiplicacion=1;

    for (int i = 0; i <=5; i++)
    {
        multiplicacion *= numeros[i];
    }
    
    cout<<"La multiplicacion de los elementos de los vectores es: "<<multiplicacion<<endl;




    return 0;
}