/*Hacer un programa que pida al usuario que digite una 
cadena de caracteres, luego verificar la longitud de la cadena, 
y si esta supera a 10 caracteres mostrarla en 
pantalla en caso contrario no mostrarla */


#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;    

int main(){
    std::string cadena;

    //pedir al usuario que digite una cadena de caracteres
    std::cout<<"Digite una cadena de caracteres: ";
    std::getline(std::cin, cadena);

    //verificar la longitud de la cadena
    if (cadena.length() > 10)
    {
        //mostrar la cadena si supera los 10 caracteres
        std::cout<<"La cadena de caracteres es: "<<cadena<<std::endl;
    }else{
        //no mostrar la cadena si no supera los 10 caracteres
        std::cout<<"La cadena de caracteres no supera los 10 caracteres"<<std::endl;
    }
    

    system("pause");
    return 0;
}