/*7. escriba un programa una edad e indique si la edad 
entra en el rango de 18 a 25*/

#include<iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Digite su edad: ";
    cin>>edad;

    if (edad >=18 && edad <= 25){
        cout<<"Esta dentro del rango de edad. \n";
    } else {
        cout<<"No esta dentro del rango de edad. \n";
    }

return 0;
}