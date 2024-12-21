/*Ejercico 8 realice un programa que calcule el producto 
de dos matrices cuadradas de 3 x 3*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    
    int matriz1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matriz2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matriz_resultante[3][3];


    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            matriz_resultante[i][x] = matriz1[i][x] * matriz2[i][x];
        }
           
    }

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout<<matriz_resultante[i][x]<<"\t";
        }
        cout<<"\n";
    }
    
    

    
    system("pause");
    return 0;
    }