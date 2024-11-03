/*La sentecnia id
if (condicion){
intrucciones1;
}
else{
instrucciones2;
}
*/

#include<iostream>

using namespace std;

int main(){
    int numero, dato = 5;
    std::cout<<"Digite un numero: "; cin>>numero;

    if (numero != dato)
    {
        cout<<"El numero no es 5";
    }
    else{
        cout<<"El numero es 5"<<endl;
    }

    return 0;
}

