/*Hacer un programa que lea 5 numeros en un areglo, los copie a otro multiplicados
por dos y muestre el segundo arreglo */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int num1[5], num2[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<". Digite el numero del arreglo: ";
        cin>>num1[i];
    }
    
    for (int i = 0; i <= 5; i++)
    {
        num2[i] = num1[i]*2;
    }
    

    cout<<"Los numeros del arreglos son: ";

    for (int i = 0; i < 5; i++)
    {
        cout<<num2[i]<<endl;
    }
    


    return 0;
}