#include<stdio.h>
int main()
{
	// Programa de verificação de nomes de alunos e calcular se esta aprovado ou reprovado
	//variaveis
	int x,y;
	float n1,n2;
	//Imprimindo na tela
	printf("Quantos alunos? ");
	//Lendo a variavel
	scanf("%d",&y);
	//Inicio do for
	for(x=1;x<=y;x++)
	{
		//Imprimindo na tela
		printf("\nDigite a primeira nota");
		//Lendo a variavel
		scanf("%f.1f",&n1);
		//Imprimindo na tela
		printf("\nDigite a segunda nota");
		//Lendo a variavel
		scanf("%f.1f",&n2);
		if((n1+n2)/2>6)
		{
			printf("O aluno esta APROVADO!!!\\n\n");
		}
		else
		{
			printf("O aluno esta REPROVADO!!!\n\n");
		}
	}
	
}
