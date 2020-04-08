#include<stdio.h>
int main()
{
	//Programa de impressão da taboada de multiplicação
	//variaveis
	int x,y,z;
	//Imprimindo na tela
	printf("Qual a taboada deseja imprimir?");
	//Lendo a variavel
	scanf("%d",&y);
	//Imprimindo na tela
	printf("Ate quanto?");
	//Lendo a variavel
	scanf("%d",&z);
	//Inicio do for
	for(x=1;x<=z;x++)
	{
		printf("\n%d * %d = %d",x,y,x*y);
	}
}
