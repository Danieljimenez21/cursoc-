/*3. ralice un programa que lea de la entrada estandar los siguientes datos 
de una persona 
edad: dato de tipo entero 
sexo: dato de tipo caracter
altura en metros: dato de tipo real.

tras leer los datos el progama debe de mostarlos en salida estandar 

*/
#include<iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;
    /*edad*/
    cout<<"Digite su edad: ";
    cin>>edad;
    /*sexo*/
    cout<<"Digite su sexo: ";
    cin>>sexo;
    /*altua*/
    cout<<"Digite su altura: ";
    cin>>altura;
    
    /*salidad de ambos */
    cout<<"\nSu edad de tipo entero es: "<<edad<<endl;
    cout<<"\nsu sexo es: "<<sexo<<endl;
    cout<<"\nSu altura es : "<<altura<<endl;

    return 0;
}