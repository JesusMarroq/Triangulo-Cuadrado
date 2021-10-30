/*
 Fecha: 11/Sep/18 
 Autor: JIML
 Proposito: Programa que genera un triangulo con ciclos while se basa en el programa cuadrado1.c
*/

#include <stdio.h>


int main() {
   int columna = 1;
   int fila = 1;

   //ciclo externo que controla la impresion de las filas o lineas 
   while(fila <= 5){

   	/*ciclo interno que controla la impresion de las columnas 
    notese como la condicion de continuacion de ciclo compara a columna con una variable (fila)
    y no con una constante como en el programa del cuadrado(antes era: columna <= 5)
    es por eso que en la primer linea la variable fila vale 1 y solo se pinta un asterisco
    en la segunda linea fila vale 2 y pinta dos asteriscos y asi sucesivamente */
   	while(columna <= fila){
  		printf("*");
  		columna++;
  	}

  	//se reinicia el valor de columna a 1
  	columna = 1;
  	//se hace un salto de linea
  	printf("\n");
  	fila++;
	}

} 
