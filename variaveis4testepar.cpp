#include<stdio.h>
int main()
{
	//variaveis
	int a;
	printf("\nDigite um valor para a: ");
	//Lendo o valor e guardando na variavel
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("O numero digitado e PAR!!!");
	}
	else
	{
		printf("O numero digitado e IMPAR!!!");
	}
}
