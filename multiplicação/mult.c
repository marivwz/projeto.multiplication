#include <stdio.h>
#include <stdlib.h>


void main (){
	int numero1;
	int numero2;
	int resultado;

	printf("==Calculo di multiplicação==");
	puts("\nDigite um valor:");
	scanf("%d",&numero1);
	printf("\nDigite outro valor:");
	scanf("%d",&numero2);
	resultado = numero1*numero2;
	printf("\nA multiplicação de %d e de %d, resulta em %d \n",numero1,numero2,resultado);



}
