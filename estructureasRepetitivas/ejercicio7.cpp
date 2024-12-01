/*7. describa un programa que calcule el valor de: 1 +2...+n*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n, resultado=1;
    
    cout<<"Digite el numero de elementos: ";
    cin>>n;

    for (int i = 1; i < n; i++)
    {
        resultado += i;
    }
    
    cout<<"El resulado es: "<<resultado;



    return 0;
}