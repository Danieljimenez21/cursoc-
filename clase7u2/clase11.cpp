/*9. Realice un programa que calcule el valor que toma la siguiente 
funcion para unos valores dados de x e y*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"digite el valor de x: "; cin>>x;
    cout<<"digite el valor de y: "; cin>>y;

    resultado = (sqrt(x)) / (pow(y, 2)-1);

    cout<<"\nEl resuldato es: "<<resultado<<endl;

    return 0;
}