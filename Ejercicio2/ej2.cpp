/*Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7.
El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado
 (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).*/
#include "ej2.h"
#include <iostream>
using namespace std;
void dia(){
 //PEDIMOS AL USUARIO QUE INGRESE UN NUMERO DEL 1 AL 7
 int numero;
 cout<<"Digite un numero del 1 al 7: ";cin>>numero;
 //UTILIZAMOS UNA ESTRUCTURA SWITCH PARA IMPRIMIR EL DIA DE LA SEMANA CORRESPONDIENTE AL NUMERO INGRESADO
 switch(numero){
  //EN CASO DE QUE EL NUMERO SEA 1, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES LUNES
 case 1: cout<<"El dia de la semana correspondiente al numero 1 es Lunes"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 2, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES MARTES
 case 2: cout<<"El dia de la semana correspondiente al numero 2 es Martes"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 3, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES MIERCOLES
 case 3: cout<<"El dia de la semana correspondiente al numero 3 es Miercoles"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 4, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES JUEVES
 case 4: cout<<"El dia de la semana correspondiente al numero 4 es Jueves"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 5, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES VIERNES
 case 5: cout<<"El dia de la semana correspondiente al numero 5 es Viernes"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 6, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES SABADO
 case 6: cout<<"El dia de la semana correspondiente al numero 6 es Sabado"<<endl;break;
  //EN CASO DE QUE EL NUMERO SEA 7, SE IMPRIME QUE EL DIA DE LA SEMANA CORRESPONDIENTE ES DOMINGO
 case 7: cout<<"El dia de la semana correspondiente al numero 7 es Domingo"<<endl;break;
  //EN EL CASO QUE SE INTRODUZCA UN NUMERO QUE NO ESTE ENTRE 1 Y 7, SE IMPRIME QUE EL VALOR NO ESTA DEFINIDO
 default: cout<<"Valor no defenido, introduzca un numero del 1 al 7"<<endl;break;
 }
}
