/*
ejecute un programa del ejercicio anterior erroneas y 
observe los resultados. por ejemplo, introduzca un
dato de tipo caracter cuando se espera un dato de 
tipo entero 
*/

//1. escribe la siguiente expresion con expresion 
//en c++

#include<iostream>

using namespace std;

int main(){
    float a, b, resultado = 0;
    cout<<"digite el valor de a: "; cin>>a;
    cout<<"digite el valor de b: "; cin>>b;

    resultado = (a/b) + 1;
    cout<<"\n el resultado es: "<<resultado<<endl;

    return 0;
}