#include<stdio.h>
int main()
{
	//Impress�o do dobro dos numeros digitados enquanto n�o digitar um numero menor ou igual a 0
	//variaveis
	int num;
	//Imprimindo na tela
	printf("Digite um numero inteiro: ");
	//Lendo a variavel
	scanf("%d",&num);
	//Inicio do while
	while (num>0)
	{
		printf("\nO dobro do numero digitado e: %d\n",num*2);
		//Imprimindo na tela
		printf("Digite um numero inteiro: ");
		//Lendo a variavel
		scanf("%d",num);
	}
}
