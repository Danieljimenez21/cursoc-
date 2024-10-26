/* notas practicas, teorica y participacion 3
notas y escribir la solucion*/

#include<iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, nota_final;

    cout<<"digite la nota de practica: "; cin>>practica;
    cout<<"digite la nota de teorica: "; cin>>teorica;
    cout<<"digite la nota de participacion: "; cin>>participacion;
    
    practica *= 0.3; /* es lo mismo que pracitca = practica * 0.3*/
    teorica *= 0.6;
    participacion *= 0.1;

    nota_final = practica + teorica + participacion;

    cout<<"\n la nota final es: "<<nota_final<<endl;



    return 0;
}