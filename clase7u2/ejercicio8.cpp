/*Escriba un programaq que lea de la entrada estandar 
los dos catetos de un triangulo rectangulo y escriba en 
la salida estandar su hipotenusa a*/

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main(){
    float a, b, c;
    cout<<"Digite el cateto a: "; cin>>a;
    cout<<"Digite el cateto b: "; cin>>b;

    c = sqrt((pow(a,2))+(pow(b,2)));

    cout.precision(4);

    cout<<"la hipotenusa es: "<<c<<endl;


    return 0;
}