/*escribe la siguiente expresion matematica en 
expresion de c++*/
 
#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;

    resultado = (a+b)/(c+d);

    cout<<"el resultado es: "<<resultado<<endl;


    return 0;
}

//ejercicio de clase
#include<iostream>

using namespace std;


int clase8(){
    float a,b,c,d,e,f, resultado = 0;

    cout<<"digite el valor de a: "; cin>>a;
    cout<<"digite el valor de b: "; cin>>b;
    cout<<"digite el valor de c: "; cin>>c;
    cout<<"digite el valor de d: "; cin>>d;
    cout<<"digite el valor de e: "; cin>>e;
    cout<<"digite el valor de f: "; cin>>f;

    resultado = (a + (b/c))/(d + (e/f));
    cout<<"\nEl resuldo es: "<<resultado<<endl;
    

    return 0;
}