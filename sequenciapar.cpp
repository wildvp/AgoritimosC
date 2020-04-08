#include<stdio.h>
int main()
{
	//Imprimir sequencia de numeros pares
	//variaveis
	int par,x;
	//Imprimindo na tela
	printf("Inicio em: ");
	//Lendo a variavel
	scanf("%d",&par);
	//Imprimindo na tela
	printf("Termino em: ");
	//Lendo a variavel
	scanf("%d",&x);
	//Verificando se o inicio e maior ou igual ao fim da sequencia
	if(par>=x)
	{
		printf("Inicio e maior ou igual ao fim da sequencia!!!!");
	}
	else
	{
		printf("Os numeros pares de %d e %d sao:\n\n",par,x);
		//Inicio do while
		while(par<=x)
		{
		//Imprimindo na tela
		printf("\%d\t",par);
		par=par+2;
		}
	}
}
