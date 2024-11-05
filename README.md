# EXAMEN JUAN IGNACIO GONZÁLEZ DE LA PEÑA
https://github.com/JuanIgnacio006/EXPARCIAL2_JuanIgnacio_Gonzalez.git

## Instrucciones de Entrega
## Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.
# Parte 2: Problemas de Codificación (70 puntos en total)
## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero

Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

## Ejercicio 2: Día de la Semana

Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 


## Ejercicio 3: Cálculo de Promedio de Calificaciones

Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

## Ejercicio 4: Promoción de "3 por 2" en Tienda

En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.


## FUENTES

EJERCICIO 1 HECHO POR MI

EJERCICIO 2 HECHO POR MI

EJERCICIO 3 HECHO POR MI

EEJRCICIO 4 HECHO POR MI

## DESCRIPCION DE LOS EJERCICIO (LA EXPLICACION LA ENCONTRARAS TAMBIEN EN EL ARCHIVO.CPP DEL PROPIO EJERCICIO)

### EJERCICIO 1_ EXPLICACION

PASO 1: PEDIMOS EL NUMERO ENTERO AL USUARIO

PASO 2: UTILIZAMOS UNA ESTRUCTURA CONDICIONAL (if..else)PARA DETERMINAR SI EL NUMERO ES POSITIVO, NEGATIVO O CERO

PASO 3: PRIMERO COMPROBAMOS SI EL NUMERO ES 0,SI LO ES, SE IMPRIME QUE EL NUMERO ES CERO

PASO 4: DESPUES COMPROBAMOS SI EL NUMERO ES MAYOR A 0, SI LO ES, SE IMPRIME QUE EL NUMERO ES POSITIVO

PASO 5: POR ULTIMO COMPROBAMOS SI EL NUMERO ES MENOR A 0,SI LO ES, SE IMPRIME QUE EL NUMERO ES NEGATIVO


### EJERCICIO 2_EXPLICACION

PASO 1: PEDIMOS AL USUARIO QUE INGRESE UN NUMERO DEL 1 AL 7

PASO 2: UTILIZAMOS UNA ESTRUCTURA SWITCH PARA IMPRIMIR EL DIA DE LA SEMANA CORRESPONDIENTE AL NUMERO INGRESADO

PASO 3: COMPROBAMOS CADA CASO E IMPRIMIMOS QUE DIA CORRESPONDE AL NUMERO INTRODUCIDO (1 PARA LUNES, 2 PARA MARTES...)

PASO 4: TERMINAMOS CON UN default, EN EL CASO QUE SE INTRODUZCA UN NUMERO QUE NO ESTE ENTRE 1 Y 7, SE IMPRIME QUE EL VALOR NO ESTA DEFINIDO


### EJERCICIO 3_EXPLICACION

PASO 1: PEDIMOS AL USUARIO QUE INGRESE LAS NOTAS DE LOS 8 EJERCICIOS

PASO 2: UTILIZAMOS UNA ESTRUCTURA CONDICIONAL IF PARA VERIFICAR QUE LAS NOTAS ESTEN ENTRE 0 Y 10

PASO 3: SI LAS NOTAS ESTAN ENTRE 0 Y 10, CALCULAMOS EL PROMEDIO DE LAS NOTAS

PASO 4: EN EL else PONEMOS QUE EN EL CASO QUE SE INTRODUZCA UNA NOTA MAYOR A 10 O MENOR QUE 0, QUE NOS IMPRIMA QUE TODAS LAS NOTAS DEBEN ESTAR ENTRE 0 Y 10


### EJERCICIO4_EXPLICACION

PASO 1: PEDIMOS AL USUARIO QUE INGRESE LOS PRECIOS DE LOS 3 ARTICULOS

PASO 2: UTILIZAMOS UNA ESTRUCTURA CONDICIONAL PARA DETERMINAR CUALES SON LOS DOS ARTICULOS MAS CAROS
    
PASO 3:PARA ELLO (ENCONTRAR LOS 2 MAS CAROS) COMPRBAMOS ENTRE 2 PRODUCTOS CUAL ES EL MAYOR Y LUEGO AL MENOR DE ESTA COMPARACION
    LO COMPARAMOS CON EL OTRO PRODUCTO QUE QUEDA, LOS DOS MAYORES SE SUMAN Y ESE ES NUESTRO PRECIO A PAGAR


PASO 4: IMPRIMIMOS EL TOTAL A PAGAR, QUE SERA LA SUMA DE LOS 2 PRODUCTOS MAS CAROS    
