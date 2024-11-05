/*Un estudiante ha completado un curso de programación avanzada en C++.
 Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota
 entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones
 obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular
 y mostrar el promedio de las calificaciones.*/
#include "ej3.h"
#include <iostream>
using namespace std;
void promedio()
{
float nota1,nota2,nota3,nota4,nota5,nota6,nota7,nota8,promedio;

 cout<<"Ingrese la nota del primer ejercicio: ";cin>>nota1;
 cout<<"Ingrese la nota del segundo ejercicio: ";cin>>nota2;
 cout<<"Ingrese la nota del tercer ejercicio: ";cin>>nota3;
 cout<<"Ingrese la nota del cuarto ejercicio: ";cin>>nota4;
 cout<<"Ingrese la nota del quinto ejercicio: ";cin>>nota5;
 cout<<"Ingrese la nota del sexto ejercicio: ";cin>>nota6;
 cout<<"Ingrese la nota del septimo ejercicio: ";cin>>nota7;
 cout<<"Ingrese la nota del octavo ejercicio: ";cin>>nota8;
if(nota1>0 && nota1<10 && nota2>0 && nota2<10 && nota3>0 && nota3<10 && nota4>0 && nota4<10 && nota5>0 && nota5<10 && nota6>0 && nota6<10 && nota7>0 && nota7<10 && nota8>0 && nota8<10)
{
    promedio=(nota1+nota2+nota3+nota4+nota5+nota6+nota7+nota8)/8;
    cout<<"El promedio de las notas es: "<<promedio<<endl;
}
else
{
    cout<<"Todas las notas deben estar entre 0 y 10"<<endl;
}
}
