/*La sentencia switch

    switch(espresion){
    case literal1:
        conjunto de intrucciones1;
        break;
    case literal2:
        conjunto de intrucciones2;
        break;
    default:
        conjunto de instruciones por defecto;
        break;
    }
*/

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un nuemero entre 1 y 5: ";
    cin>>numero;

    switch (numero)
    {
    case 1: cout<<"el numero es 1";
        break;
    case 2: cout<<"el numero es 2";
        break;
    case 3: cout<<"el numero es 3";
        break;
    case 4: cout<<"el numero es 4";
        break;
    case 5: cout<<"el numero es 5";
        break;
    default: cout<<"No esta en el rango de 1 a 5";
        break;
    }

    return 0;
}

