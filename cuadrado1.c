/*
 Fecha: 11/Sep/18 
 Autor: JIML
 Proposito: Programa que genera un cudrado con ciclos while
*/

#include <stdio.h>


int main() {
   int columna = 1;
   int fila = 1;

   //ciclo externo que controla la impresion de las filas o lineas 
   while(fila <= 5){

   	//ciclo interno que controla la impresion de las columnas 
   	while(columna <= 5){
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
