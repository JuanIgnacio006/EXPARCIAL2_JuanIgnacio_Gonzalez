/*Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7.
El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado
 (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).*/
#include "ej2.h"
#include <iostream>
using namespace std;
void dia(){
 int numero;
 cout<<"Digite un numero del 1 al 7: ";cin>>numero;
 switch(numero){
 case 1: cout<<"El dia de la semana correspondiente al numero 1 es Lunes"<<endl;break;
 case 2: cout<<"El dia de la semana correspondiente al numero 2 es Martes"<<endl;break;
 case 3: cout<<"El dia de la semana correspondiente al numero 3 es Miercoles"<<endl;break;
 case 4: cout<<"El dia de la semana correspondiente al numero 4 es Jueves"<<endl;break;
 case 5: cout<<"El dia de la semana correspondiente al numero 5 es Viernes"<<endl;break;
 case 6: cout<<"El dia de la semana correspondiente al numero 6 es Sabado"<<endl;break;
 case 7: cout<<"El dia de la semana correspondiente al numero 7 es Domingo"<<endl;break;
 default: cout<<"Valor no defenido, introduzca un numero del 1 al 7"<<endl;break;
 }
}
