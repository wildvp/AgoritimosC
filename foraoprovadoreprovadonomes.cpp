#include<stdio.h>
int main()
{
	// Programa de verificação de nomes de alunos e calcular se esta aprovado ou reprovado
	//variaveis
	int x,y;
	float n1,n2;
	char nome[15];
	//Imprimindo na tela
	printf("Quantos alunos? ");
	//Lendo a variavel
	scanf("%d",&y);
	//Inicio do for
	for(x=1;x<=y;x++)
	{
		//Imprimindo na tela
		printf("\nQual o nome do aluno: ");
		//Lendo a variavel
		scanf("%s",&nome);
		//Imprimindo na tela
		printf("\nDigite a primeira nota: ");
		//Lendo a variavel
		scanf("%f.1f",&n1);
		//Imprimindo na tela
		printf("\nDigite a segunda nota: ");
		//Lendo a variavel
		scanf("%f.1f",&n2);
		if((n1+n2)/2>6)
		{
			printf("O aluno %s esta APROVADO!!!\n\n",nome);
		}
		else
		{
			printf("O aluno %s esta REPROVADO!!!\n\n",nome);
		}
	}
	
}
