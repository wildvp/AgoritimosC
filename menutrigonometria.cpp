#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//MENU TRIGONOMETRIA
	//Variaveis
	int op;
	float b,h,x;
	do
	{
		//Imprimindo as opções do menu
		printf("MENU DE OPCOES - AREA E PERIMETRO DAS FIGURAS\n\n");
		printf("1 - Area de um quadrado / retangulo\n\n");
		printf("2 - Perimetro de um quadrado / retangulo\n\n");
		printf("3 - Area de um triangulo\n\n");
		printf("4 - Perimetro de um triangulo\n\n");
		printf("5 - Area de um circulo\n\n");
		printf("6 - Perimetro de um circulo\n\n");
		printf("0 - Sair\n\n");
		printf("DIGITE SUA OPCAO: ");
		scanf("%d",&op);
		if (op==1)
		{
			//Calculando a area do quadrado/retangulo
			//Imprimindo na tela
			printf("Digite a medida da base: ");
			//Lendo a variavel
			scanf("%f",&b);
			//Calculando a area do quadrado/retangulo
			printf("Digite a medida da altura: ");
			//Lendo a variavel
			scanf("%f",&h);
			//Calculando
			printf("A area do QUADRADO / RETANGULO e: %2.2f\n\n",b*h);
			system("pause");
			system("cls");
		}
		if(op==2)
		{
			//Calculando o perimetro do quadrado/retangulo
			//Imprimindo na tela
			printf("Digite a medida da base: ");
			//Lendo a variavel
			scanf("%f",&b);
			//Calculando a area do quadrado/retangulo
			printf("Digite a medida da altura: ");
			//Lendo a variavel
			scanf("%f",&h);
			//Calculando
			printf("A perimetro do QUADRADO / RETANGULO e: %2.2f\n\n",(b+h)*2);
			system("pause");
			system("cls");		
		}
		if(op==3)
		{
			//Calculando a area do triangulo
			//Imprimindo na tela
			printf("Digite a medida da base: ");
			//Lendo a variavel
			scanf("%f",&b);
			//Calculando a area do quadrado/retangulo
			printf("Digite a medida da altura: ");
			//Lendo a variavel
			scanf("%f",&h);
			//Calculando
			printf("A area do TRIANGULO e: %2.2f\n\n",(b*h)/2);
			system("pause");
			system("cls");		
		}
		if(op==4)
		{
			//Calculando o perimetro do triangulo
			//Imprimindo na tela
			printf("Digite a medida do primeiro lado: ");
			//Lendo a variavel
			scanf("%f",&b);
			//imprimindo na tela
			printf("Digite a medida do segundo lado: ");
			//Lendo a variavel
			scanf("%f",&h);
			//imprimindo na tela
			printf("Digite a medida do terceiro lado: ");
			//Lendo a variavel
			scanf("%f",&x);
			//Calculando
			printf("A area do TRIANGULO e: %2.2f\n\n",b+h+x);
			system("pause");
			system("cls");		
		}
		if(op==5)
		{
			//Calculando a area do circulo
			//Imprimindo na tela
			printf("Digite o raio do circulo: ");
			//Lendo a variavel
			scanf("%f",&b);
			//Calculando
			printf("A area do CIRCULO e: %2.2f\n\n",3.1415*b*b);
			system("pause");
			system("cls");		
		}
		if(op==6)
		{
			//Calculando o perimetro do circulo
			//Imprimindo na tela
			printf("Digite o raio do circulo: ");
			//Lendo a variavel
			scanf("%f",&b);
			//Calculando
			printf("A area do CIRCULO e: %2.2f\n\n",2*3.1415*b);
			system("pause");
			system("cls");		
		}
	}
	while (op!=0);
}
