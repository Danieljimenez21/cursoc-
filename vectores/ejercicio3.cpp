/*3. escribe un programa que lea de la entrada estandar un vector de numeros
y muestre en la salida estandar los numeros del vector con sus 
indices indicados*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero[100],n;
    
    cout<<"Digite el numero de elementos que va a tener el arreglo: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Digite un numero: ";
        cin>>numero[i];
    }
    
    //Se mostraran los indices asociados 

    for (int i = n; i <= 0; i--)
    {
        cout<<i<<" -> "<<numero[i]<<endl;
    }
    


    system("pause");
    return 0;
}