

/*Hacer un programq ue simule un cajero automatico con un saldo 
inicial de 1000 dolares */
#include<iostream>

using namespace std;

int main(){
    int saldo_incial=1000, opc;
    float extra, saldo=0, retiro;


    cout<<"\t Bienvendo a su cajero virtual"<<endl;
    cout<<"\n1. Ingrese dinero en cuenta.";
    cout<<"\n2. Retirar dinero de la cuenta.";
    cout<<"\n3. Salir";
    cout<<"\nOpcion: ";
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"Digite la cantidad de dinero a ingresar: ";
        cin>>extra;
        saldo = saldo_incial + extra;
        cout<<"Dinero en cuenta: "<<saldo<<endl;
        break;
    case 2:
        cout<<"Digite la cantidad de dinero a retirar: ";
        cin>>retiro;
        if (retiro > saldo_incial )
        {
            cout<<"No tiene dinero suficiente\n";
        } else {
            saldo = saldo_incial - retiro;
            cout<<"Dinero en cuenta: "<<saldo<<endl;
        }
        break;
    case 3:
        break;
    
    default:
        cout<<"Digite una opcion valida";
        break;
    }

    return 0;
}