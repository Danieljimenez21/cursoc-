/*Pedir al usuario una cadena de caracteres, almacenarla 
en un arreglo y copiar todo su contenido hacia otro arreglo
de caracteres*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char cadena[100];
    char cadena2[100];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena, 100, '\n');

    strcpy(cadena2, cadena);
    cout<<"La cadena copiada es: "<<cadena2<<endl;



    system("pause");
    return 0;
}