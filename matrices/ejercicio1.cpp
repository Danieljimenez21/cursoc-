/*hacer un programa para rellenar una matriz pidiendo al usuario el numero de 
filas y columnas, posteriormente mostrar la matriz en pantalla*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: ";
    cin>>filas;

    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //almacenando elementos de la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout<<"Digite un numero: ["<<i<<"]["<<x<<"]: ";
            cin>>numeros[i][x];
        }
        
    }


    //mostrando los elementos de la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout<<numeros[i][x];
        }

        cout<<"\n";
        
    }
    
    

    return 0;
}