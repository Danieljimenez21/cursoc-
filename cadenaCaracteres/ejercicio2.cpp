/*Copiar el contenido de una cadena a otra - funcion strcopy*/

#include <iostream>
#include <string.h>
#include <stdlib.h> 

using namespace std;

int main(){
    char nombre[] = "Daniel";
    char nombre2[20];

    strcpy(nombre2, nombre);

    cout<<nombre2<<endl;


    system("pause");
    return 0;
}