/*Ejercicio numero 16. Realice un programa que calcule la descomposicion
en factores primos de un numero entero*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero"; cin>>numero;

    cout<<"\n Descomponiendo en factores primos: ";

    for (int i = 2;numero > 1; i++)
    {
        while (numero % i == 0)
        {
            cout <<i<<" ";
            numero /= i;
        }
        
    }

    cout<<"\n";

    system("pause");
    
    return 0;
}
