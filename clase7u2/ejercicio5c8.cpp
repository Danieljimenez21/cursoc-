/* 5. escriba un fragmento de programa que 
intercambie los valores de dos variables */

#include<iostream>

using namespace std;

int main(){
    float x, y, z = 0;
    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    z = x;
    x = y;
    y = z;

    cout<<"El valor de x es: "<<x;
    cout<<"\nEl valor de y es: "<<y<<endl;

    return 0;
}
