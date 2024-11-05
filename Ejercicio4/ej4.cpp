/*En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse
tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++
que solicite al usuario ingresar los precios de tres artículos y, como resultado,
muestre el total que el cliente debe pagar bajo esta promoción.*/
#include "ej4.h"
#include <iostream>
using namespace std;
void oferta()
{
    //PEDIMOS AL USUARIO QUE INGRESE LOS PRECIOS DE LOS 3 ARTICULOS
    float precio1,precio2,precio3;
    cout<<"Ingrese el precio del primer articulo: ";cin>>precio1;
    cout<<"Ingrese el precio del segundo articulo: ";cin>>precio2;
    cout<<"Ingrese el precio del tercer articulo: ";cin>>precio3;
    /*UTILIZAMOS UNA ESTRUCTURA CONDICIONAL PARA DETERMINAR CUALES SON LOS DOS ARTICULOS MAS CAROS
    PARA ELLO COMPRBAMOS ENTRE 2 PRODUCTOS CUAL ES EL MAYOR Y LUEGO AL MENOR DE ESTA COMPARACION
    LO COMPARAMOS CON EL OTRO PRODUCTO QUE QUEDA, LOS DOS MAYORES SE SUMAN Y ESE ES NUESTRO PRECIO A PAGAR*/
    if(precio1>precio2 && precio2>precio3)
    {
        cout<<"El total a pagar es: "<<precio1+precio2<<endl;
    }
    else if(precio2>precio1 && precio1>precio3)
    {
        cout<<"El total a pagar es: "<<precio2+precio1<<endl;
    }
    else if(precio3>precio1 && precio1>precio2)
    {
        cout<<"El total a pagar es: "<<precio3+precio1<<endl;
    }
    else if(precio1>precio3 && precio3>precio2)
    {
        cout<<"El total a pagar es: "<<precio1+precio3<<endl;
    }
    else if(precio2>precio3 && precio3>precio1)
    {
        cout<<"El total a pagar es: "<<precio2+precio3<<endl;
    }
    else if(precio3>precio2 && precio2>precio1)
    {
        cout<<"El total a pagar es: "<<precio3+precio2<<endl;
    }

}

