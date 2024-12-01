/**/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


int main(){
    int numero, dato, contador = 0 ;

    srand(time(NULL));//genrar un numero aleatorio
    dato = 1 + rand()%(100);//25

    do{
        cout<<"Digite un numero: "; cin>>numero;

        if (numero>dato)
        {
            cout<<"Digite un numero menor: \n";
        }
        if (numero<dato){
            cout<<"Digite un numero mayor: \n";
        }
        contador++;
    } while(numero != dato);

    cout<<"\n Felicidades adivinaste el numero\n";
    cout<<"Numero de intentos: "<<contador<<endl;


    return 0;
}

