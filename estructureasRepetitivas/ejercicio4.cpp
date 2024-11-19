/*Ejercicio4. Escriba un programa que tome cada 4 horas
la temperatura exterior, leyendola durante un perioso
de 24 horas. Es decir, debe de leer 6 temperaturas.
calcule la temperatura media del dia, la temperatura mas alta 
y la mas baja */

#include<iostream>
using namespace std;

int main(){
    int lecturas, temp, sum = 0;
    int media, temp_max = 1, temp_min=999;

    for (int i = 1; i <= 6; i++)
    {
        cout<<"Digite la temperatura "<<i<<": ";
        cin>>temp;

        sum = sum + temp;
    if(temp_max < temp){
        temp_max = temp;
    }
    if (temp_min > temp)
    {
        temp_min = temp;
    }
    
    }
    media = sum / 6;

    cout<<"La temperatura media es: "<<media<<endl;
    cout<<"La temperatura maxima es: "<<temp_max<<endl;
    cout<<"La temperatura minima es: "<<temp_min<<endl;

    return 0;
}

