/*
escribe un programa que lea la entrada estandar el precio de un 
producto y mestre en la salidad estandar el precion del producto 
al aplicarle el IVA 
*/
#include<iostream>

using namespace std;

int main(){
    float num, iva = .84, total;
    cout<<"Digite el precio de la compra total ";
    cin>>num;
    total = num * iva;
    cout<<"El total a pagar es: "<<total;

    
return 0;
}