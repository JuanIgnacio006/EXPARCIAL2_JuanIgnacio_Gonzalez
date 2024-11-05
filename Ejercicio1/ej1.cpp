/*Escribe un programa en C++ que solicite al usuario ingresar un número entero.
El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo"
, "negativo" o "cero"*/
#include "ej1.h"
#include <iostream>
using namespace std;
void comprobacion()
{
    //PEDIMOS EL NUMERO ENTERO AL USUARIO
    int numero;
    cout<<"Ingrese un numero entero: ";cin>>numero;
    //UTILIZAMOS UNA ESTRUCTURA CONDICIONAL PARA DETERMINAR SI EL NUMERO ES POSITIVO, NEGATIVO O CERO
    //EN CASO DE QUE EL NUMERO SEA 0, SE IMPRIME QUE EL NUMERO ES CERO
    if(numero==0)
    {
        cout<<"El numero es cero"<<endl;
    }
    //EN CASO DE QUE EL NUMERO SEA MAYOR A 0, SE IMPRIME QUE EL NUMERO ES POSITIVO
    else if(numero>0)
    {
        cout<<"El numero "<<numero<<" es positivo"<<endl;
    }
    //EN CASO QUE EL NUMERO SEA MENOR A 0, SE IMPRIME QUE EL NUMERO ES NEGATIVO
    else
    {
        cout<<"El numero "<<numero<<" es negativo"<<endl;
    }

}