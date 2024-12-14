/*Determine un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del vector*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[100],n, mayor;

    cout<<"Digite el numero que va a tener el arreglo: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" Digite un numero: ";
        cin>>numeros[i];

        if (numeros[i]>mayor)
        {
            mayor = numeros[i];
        }
        
    }
    
    cout<<"\nEl numero mayor es: "<<mayor;

    system("pause");
    return 0;
}
