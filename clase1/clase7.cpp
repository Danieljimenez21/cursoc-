/* escribe la siguiente expresion como 
expresion en c++*/

#include<iostream>

using namespace std;
int main(){
    float a, b, resultado = 0;
    cout<<"digite el valor de a: "; cin>>a;
    cout<<"digite el valor de b: "; cin>>b;

    resultado = (a/b) + 1;

    //redondear numeros 
    cout.precision(2);
    cout<<"/n el resultado es: "<<resultado<<endl;

    return 0;
}