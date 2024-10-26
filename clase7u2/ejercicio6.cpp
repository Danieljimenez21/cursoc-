/*Ejercicio 6: escriba un programa que lea la nota final 
de cuatro alumnos y calcule la nota final media 
de los cuatro alumnos*/

#include<iostream>

using namespace std;

int main(){
    int i = 1, sum, promedio = 0, calificacion = 0;
    for ( i = 1; i <= 4; i++)
    {
        cout<<"digite el valor del alumno: "<<i<<" "; cin>>calificacion;
        sum = sum + calificacion;
    }
    
    promedio = sum / 4;

    cout<<"el promedio es: "<<promedio<<endl;

    return 0;
}