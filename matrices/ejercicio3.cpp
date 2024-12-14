/*hacer una matriz de tipo entera de 2*2, llamarla de numeros y luego
copiar el contenido en otra matriz*/

#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int numero[2][2] = {
        {1,2},
        {3,4}
    };
    int numeros2[2][2];
    //pasando el contenido de una matriz a otra 
    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 2; x++)
        {
            numeros2[i][x] = numero[i][x];
        }
        cout<<endl;
        
    }
    

    //mostrando la matriz copiada 
    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 2; x++)
        {
            cout<<numeros2[i][x];
        }
        cout<<endl;
        
    }
    


    return 0;
}