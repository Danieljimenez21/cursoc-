/*cadena de caracteres*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char palabra[] = "Daniel";
    char palabra2[] = {'D','a','n','i','e','l'};
    char nombre[30];

    cout<<palabra<<endl;
    cout<<palabra2<<endl;

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;




    system("pause");
    return 0;
}