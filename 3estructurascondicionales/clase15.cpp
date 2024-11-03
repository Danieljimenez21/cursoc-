/*3. realice un programa que lea un valor entero
 y determine si se trata de un numero par o impar */

#include<iostream>

using namespace std;

int main(){
    int numero;
    std::cout<<"Digite un numero";
    std::cin>>numero;
    if (numero == 0)
    {
        std::cout<<"El numero es 0";
    } else if (numero%2==0)
    {
        std::cout<<"El numero es par";
    } else {
        std::cout<<"El nuemero es impar";
    }
    

    return 0;
}