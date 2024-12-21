/*Hacer una matriz preguntando al usuario el numero de filas y 
columnas, llenarla de numeros aleatorios, copiar el contenido 
a otra matriz y por ultimo mostrasla en pantalla*/

#include<iostream>
#include<stdlib.h>
#include<cstdlib> //para srand() y rand()
#include<ctime> //para time


using namespace std;

int main(){
    int filas, columnas;

    //pedir al usuario el numero de filas y columnas 
    cout<<"Ingresa el numero de filas: ";
    cin>>filas;

    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;

    //Declarar las matrices
    int matriz[filas][columnas], copia[filas][columnas];

    //iniciar la semilla de numeros aleatorios
    srand(time(NULL));

    //lenar la matriz original con numeros aleatorios y copiar a la segunda matriz
    for (int i = 0; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            matriz[i][x]=rand()%100;//numeros aleatorios entre 0 y 99
            copia[i][x] = matriz[i][x];
        }
        
    }
    
    //mostrar la matriz original 
    cout<<"\nMatriz original: \n";
    for (int i = 0; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout<< matriz[i][x] << "\t";
        }
        cout <<endl;
        
    }
    

    //mostrar la matriz copia

    cout<<"\nCopia de la matriz: \n";
    for (int i = 0; i < filas; i++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout<<copia[i][x]<<"\t";
        }
        cout<<endl;
    }
    





    return 0;
}