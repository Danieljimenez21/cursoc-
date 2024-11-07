/*Escriba un programa que lea de la entrada estandar un caracter
e indique en la salida estandar si el caracter es una vocal minuscula,
es una vocal mayuscula o no es una vocal */

#include<iostream>

using namespace std;

int main(){
    char vocal;
    std::cout<<"Ingrese una vocal: "; cin>>vocal;
    switch (vocal)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout<<"Es minuscula\n";
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout<<"Es mayuscula\n";
        break;
    default:
        std::cout<<"No es una vocal\n";
        break;
    }

    return 0;
}