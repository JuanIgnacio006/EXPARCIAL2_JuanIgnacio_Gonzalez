/*Escribe un programa en C++ que solicite al usuario ingresar un número entero.
El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo"
, "negativo" o "cero"*/
#include "ej1.h"
#include <iostream>
using namespace std;
void comprobacion()
{
    int numero;
    cout<<"Ingrese un numero entero: ";cin>>numero;
    if(numero==0)
    {
        cout<<"El numero es cero"<<endl;
    }
    else if(numero>0)
    {
        cout<<"El numero "<<numero<<" es positivo"<<endl;
    }
    else
    {
        cout<<"El numero "<<numero<<" es negativo"<<endl;
    }

}