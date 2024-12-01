/*En una clase de 5 alumnos se han realizado tres examenes y se requieren 
determinar el numero de:
1. aprobaron todos los examenes
2. reprobaron todos los examenes 
aprobraron unicamente el ultimo examen 
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int examen1, examen2, examen3;
    int AprobaronTodosExamenes=0, Aprobaron1=0, aprobaronUltimo=0;
    for (int i = 1; i <= 5; i++)
    {
        cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
        cout<<i<<". Digite la nota del Segundo examen: "; cin>>examen2;
        cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
        cout<<"\n";
        
        //examinando la opcion a
        if ((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5))
        {
            AprobaronTodosExamenes++;
        }
        
        //examaninando la opcion b aprobaron al menos uno con or
        if ((examen1>10.5)||(examen2>10.5)||(examen3>10.5))
        {
            Aprobaron1++;
        }
        
        //opcion c aprobaron al menos uno 
        if ((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5))
        {
            aprobaronUltimo++;
        }
        
        

    }

    cout<<"\na) Aprobaron todos los examenes: "<<AprobaronTodosExamenes;
    cout<<"\nb) Aprobaron al menos un examen: "<<Aprobaron1;
    cout<<"\nc) Aprobaron unicamente el ultimo examen: "<<aprobaronUltimo;
    
    


    return 0;
}