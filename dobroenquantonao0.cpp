#include<stdio.h>
int main()
{
	//Impress�o do dobro dos numeros enquanto n�o for 0
	//variaveis
	int num;
	//Imprimindo na tela
	printf("Digite um numero: ");
	//Lendo a variavel
	scanf("%d",&num);
	//Inicio do while
	while(num>0)
	{
		printf("\nO dobro do numero e: %d\n",num*2);
		//Imprimindo na tela
		printf("Digite um numero: ");
		//Lendo a variavel
		scanf("%d",&num);
	}
	
}
