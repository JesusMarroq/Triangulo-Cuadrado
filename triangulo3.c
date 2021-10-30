/*
 Fecha: 11/Sep/18 
 Autor: JIML
 Proposito: Programa que genera un triangulo con ciclos while
 basado en el programa de cuadrado 1
*/

#include <stdio.h>


int main() {
   int columna = 1;
   int fila = 1;

   //ciclo externo que controla la impresion de las filas o lineas 
   while(fila <= 5){

   	//ciclo interno que controla la impresion de las columnas 
   	while(columna <= 5){
  		//definir la condicion para que pinte el espacio o el asterisco
      //usar astutamente las dos variables -> columna  y fila
      //Pista: ver la relacion de como columna siempre va de los valores del 1 al 5
      // contra fila empieza en 1 en la primer linea, 2 en la segunda etc
      if(  ){
        printf("*");
      }
      else{
        printf(" ");
      }

  		columna++;
  	}

  	//se reinicia el valor de columna a 1
  	columna = 1;
  	//se hace un salto de linea
  	printf("\n");
  	fila++;
	}

} 
