/*Determinar si una matriz es simetrica o no */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    for (int i = 0; i <filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout<<"Digite un numero: ["<<i<<"]["<<x<<"]";
            cin>>numeros[i][x];
        }
        
    }

    if (columnas==filas)
    {
        /* code */
    }
    
    

    


    system("pause");
    return 0;
}