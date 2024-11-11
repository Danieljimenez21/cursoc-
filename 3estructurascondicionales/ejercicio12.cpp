/*Ejercicio 12.  Hacer un menu que considera las siguientes opciones
1. cubo de un numero 
2. Numero par o impar 
3. salir
*/

#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int opcion, numero; 
    float potencia;
    cout<<"\t Digite una de las siguientes opciones"<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Número par o impar"<<endl;
    cout<<"3. salir"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Ingrese un numero para elevarlo al cubo: ";
        cin>>numero;
        potencia=pow(numero, 3);
        cout<<"El numero elevado al cubo es: "<<potencia<<endl;
        break;
    case 2:
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if (numero%2 == 0)
        {
            cout<<"El numero es par";
        } else
        {
            cout<<"EL numero es impar";
        }
    case 3:
        break;
    
    default:
        cout<<"Ingrese un numero valido";
        break;
    }
    

    return 0;
}