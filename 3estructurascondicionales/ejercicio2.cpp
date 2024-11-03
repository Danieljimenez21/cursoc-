/*Escriba un programa que lea tres numeros y determine 
cual de ellos es el mayor */

#include<iostream>

using namespace std;

int main(){
    float a, b, c;
    std::cout<<"Digite 3 numeros "; 
    std::cin>> a >> b >> c;
    if (a>b&&a>c)
    {
        cout<<"el numero mas grande es: "<<a;
    } else if (b>a && b>c)
    {
        cout<<"El numero mas grande es: "<<b;
    } else {
        cout<<"El numero mas grande es: "<<c;
    }

return 0;
}