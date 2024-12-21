/*Realice un programa que calcule la suma de dos matrices 
cuadradas de 3x3*/

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

    int suma[3][3];

for (int i = 0; i < 3; i++)
{
    for (int x = 0; x < 3; x++)
    {
        suma[i][x]= matriz1[i][x] + matriz2[i][x];
    }
    
}

cout<<"La suma de las matrices es: \n";

for (int i = 0; i < 3; i++)
{
    for (int x = 0; x < 3; x++)
    {
        cout<<suma[i][x]<<"\t";
    }
    cout<<endl;
}



    system("pause");
    return 0;
}