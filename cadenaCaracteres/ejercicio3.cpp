/*conparar cadenas - funcion strcmp*/

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//avion - becerro

int main(){
    char palabra1[] = "becerro";
    char palabra2[] = "avion";

    if (strcmp(palabra1, palabra2) < 0)
    {
        cout << "La palabra " << palabra1 << " es mayor alfabeticamente que " << palabra2 << endl;
    }

    system("pause");
    return 0;  

}