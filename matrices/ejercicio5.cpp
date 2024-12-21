/*Realizar una matriz transpuesta de 3x3 */


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<x<<"]: ";
            cin>>numeros[i][x];
        }
    }
    
    //mostrar la matriz original 
    cout<<"Matriz original: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout<<numeros[i][x]<<"\t";
        }
        cout<<endl;
    }
    
    //mostrar matriz invertida
    cout<<"Matriz traspuesta: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout<<numeros[x][i]<<"\t";
        }
        cout<<endl;
        
    }

    system("pause");
    return 0;
}