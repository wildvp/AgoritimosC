#include<stdio.h>
int main()
{
	//Impressão de numeros pares de 0 a 100
	//variaveis
	int par=0;
	//Imprimindo na tela
	printf("Os numeros pares de 0 a 100 sao:\n\n");
	//Inicio do while
	while(par<=100)
	{
		printf("%d\t",par);
		par=par+2;
	}
	
}
