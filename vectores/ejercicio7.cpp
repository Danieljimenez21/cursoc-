/*Realice un programq ue define dos vacrtores y despues almacene el contenido de 
ambos vectores en un vector, situando en primer lugar los elementos 
del prumer vector seguido por los elementos del segundo vector. mestre el contenido 
del nuevo vector en la salida estandar*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    char letras1[] = {'a','b','c','d','e','f'};
    char letras2[] = {'j','h','i','k','l','m'};
    char letras3[12];

    //copiamamos los elementosletras1 hacia letras3
    for (int i = 0; i < 6; i++)
    {
        letras3[i] = letras1[i];
    }
    
    //copiamos los elementos de letras2 hacia letras3 

    for (int i = 6; i < 12; i++)
    {
        letras3[i] = letras2[i-6];
    }
    
    //Mostrar el nuevo vector 

    for (int i = 0; i < 12; i++)
    {
        cout<<letras3[i]<<endl;
    }
    

    return 0;
}