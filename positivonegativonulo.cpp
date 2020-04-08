#include<stdio.h>
int main()
{
	// vERIFICANDO SE O NUMERO E POSITIVO NEGATIVO OU NULO
	//variaveis
	int a;
	printf("\nDigite um valor para a: ");
	//Lendo o valor e guardando na variavel
	scanf("%d",&a);
	if(a>0)
	{
		printf("O numero digitado e POSITIVO!!!");
	}
	if(a<0)
	{
		printf("O numero digitado e NEGATIVO!!!");
	}
	if(a==0)
	{
		printf("O numero digitado e NULO!!!!");
	}
	
}
