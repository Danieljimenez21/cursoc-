/*Realiza un programa que defina una matriz de 3*3
y escriba un ciclo para que muestre la diagonal principal de la matriz*/



#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int numeros[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

cout<<"Diagonal de la matriz"<<endl;
for (int i = 0; i < 3; i++)
{
    cout<<numeros[i][i]<<endl;
}



    return 0;
}