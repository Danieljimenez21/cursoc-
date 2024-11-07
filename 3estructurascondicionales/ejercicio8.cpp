/*Escribe un programa que leaa de la entrada estandar 3 numeros.
despues debe leer un cuarto numero e indicar si el numero coincide
con alguno de los introducidos con anterioridad*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;
    cout<<"Digite 3 numeros: ";
    cin>>n1 >> n2 >> n3;
    cout<<"Digite un 4 numero: ";
    cin>> n4;
  

    if (n4 == n1 || n4 == n2 || n4 == n3){
        cout<<"Hay un numero que coincide con un numero ingresado con anterioridad \n";
    } else {
        cout<<"No hay un numero que coincida con el cuarto nuemero\n";
    }

    


    return 0;
}