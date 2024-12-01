/*9. Escriba un programa que calcule el valor de 1*2*3*4..*9(factorial)*/
//5!

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, factorial=1;

    cout<<"Digite un numero: "; cin>>numero;

    for (int i = 1; i <= numero; i++)
    {
    factorial = factorial*i;
    }
    
    cout<<"El factorial del numero seleccionado es: "<<factorial;

    system("pause");

    return 0;
}