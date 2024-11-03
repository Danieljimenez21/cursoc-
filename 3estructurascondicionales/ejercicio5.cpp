/*Escriba un progrma que lea la entrada estandar un caracter e indique 
en la salida estandar si el caracter es una vocal minuscula o no*/

#include<iostream>

using namespace std;

int main(){
    char letra;

    std::cout<<"Digite un caracter"; cin>>letra;

    switch (letra)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        std::cout<<"Es una vocal miniscula";
        break;
    default:
        std::cout<<"No es una vocal minuscula";
        break;
    }
    
    return 0;
}