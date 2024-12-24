//longitud de una cadena de caracteres - funcion strien()

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){
    char palabra[] = "Daniel";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"El numero de lementos es: "<<longitud<<endl;


    system("pause");
    return 0;
}