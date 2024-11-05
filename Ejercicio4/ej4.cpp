/*En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse
tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++
que solicite al usuario ingresar los precios de tres artículos y, como resultado,
muestre el total que el cliente debe pagar bajo esta promoción.*/
#include "ej4.h"
#include <iostream>
using namespace std;
void oferta()
{
float precio1,precio2,precio3;
cout<<"Ingrese el precio del primer articulo: ";cin>>precio1;
cout<<"Ingrese el precio del segundo articulo: ";cin>>precio2;
cout<<"Ingrese el precio del tercer articulo: ";cin>>precio3;

    if(precio1>precio2 && precio1>precio3)
    {
        cout<<"El total a pagar es: "<<precio1+precio2<<endl;
    }
    else if(precio2>precio1 && precio2>precio3)
    {
        cout<<"El total a pagar es: "<<precio2+precio1<<endl;
    }
    else
    {
        cout<<"El total a pagar es: "<<precio3+precio1<<endl;
    }
}
