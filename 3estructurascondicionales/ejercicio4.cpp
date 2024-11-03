/*Comprobar si un numero digitado por el usuario
es negativo o positivo*/

#include<iostream>

using namespace std;

int main(){
    int numero;
    std::cout<<"Digite un numero: ";
    std::cin>>numero;

    if (numero == 0)
    {
        std::cout<<"El numero es 0.";
    } else if ( numero > 0){
        std::cout<<"El numero es positivo.";
    } else {
        std::cout<<"El numero es negativo.";
    }
    

    return 0;
}