#include<stdio.h>
int main()
{
	//Programa de impress�o da taboada de multiplica��o
	//variaveis
	int x,y;
	//Imprimindo na tela
	printf("Qual a taboada deseja imprimir?");
	//Lendo a variavel
	scanf("%d",y);
	//Inicio do for
	for(x=1;x<=10;x++)
	{
		printf("%d",y," * ","%d",x, " = ","%d", x*y );
	}
}
