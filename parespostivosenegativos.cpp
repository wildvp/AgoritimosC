#include<stdio.h>
int main()
{
	//Impressao de pares positivos e negativos
	//variaveis
	int x=1;
	//Inicio do while
	while(x!=0)
	{
		//Imprimindo na tela
		printf("Digite um numero (0 para finalizar) ",x);
		//Lendo a variavel
		scanf("%d",&x);
		if(x>0)
		{
			printf("Este numero e POSITIVO!!!!\n");
		}
		if(x<0)
		{
			printf("Este numero e NEGATIVO!!!!\n");
		}
	}
}
