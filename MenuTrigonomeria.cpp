#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//Variaveis
	int op;
	float base,altura,lado1,lado2,lado3,raio;
	do
	{
		//Construindo as opções do menu
		printf("MENU DE OPCOES - TRIGONOMETRIA - AREA E PERIMETRO DAS FIGURAS\n\n");
		printf("1 - Area do quadrado / retangulo\n");
		printf("2 - Perimetro do quadrado / retangulo\n");
		printf("3 - Area do triangulo \n");
		printf("4 - Perimetro do triangulo \n");
		printf("5 - Area do Circulo \n");
		printf("6 - Perimetro do circulo \n");
		printf("0 - SAIR \n\n");
		printf("DIGITE SUA OPCAO: \n");
		//Lendo a opção
		scanf("%d",&op);
		switch (op)
		{
			case 1:
				//Calcular a area do quadrado
				//Imprimindo na tela
				printf("Digite a medida da base do quadrado/retangulo: ");
				//Lendo a variavel
				scanf("%f",&base);
				//Imprimindo na tela
				printf("Digite a medida da altura do quadrado: ");
				//Lendo a variavel
				scanf("%f",&altura);
				//Imprimindo na tela
				printf("A area do quadrado/retangulo e:  %2.2f\n\n",base*altura);
				system("pause");
				system("cls");
			break;
			
			case 2:
				//Calcular a perimetro do quadrado
				//Imprimindo na tela
				printf("Digite a medida da base do quadrado/retangulo: ");
				//Lendo a variavel
				scanf("%f",&base);
				//Imprimindo na tela
				printf("Digite a medida da altura do quadrado: ");
				//Lendo a variavel
				scanf("%f",&altura);
				printf("A perimetro do quadrado/retangulo e:  %2.2f\n\n",2*base+2*altura);
				system("pause");
				system("cls");	
			break;
			
			case 3:
				//Calcular a area do triangulo
				//Imprimindo na tela
				printf("Digite a medida da base do triangulo: ");
				//Lendo a variavel
				scanf("%f",&base);
				//Imprimindo na tela
				printf("Digite a medida da altura do triangulo: ");
				//Lendo a variavel
				scanf("%f",&altura);
				//Imprimindo na tela
				printf("A area do triangulo e:  %2.2f\n\n",(base*altura)/2);
				system("pause");
				system("cls");
			break;
			
			case 4:
				//Calcular o perimetro do triangulo
				//Imprimindo na tela
				printf("Digite a medida do primeiro lado do triangulo: ");
				//Lendo a variavel
				scanf("%f",&lado1);
				//Imprimindo na tela
				printf("Digite a medida do segundo lado do triangulo: ");
				//Lendo a variavel
				scanf("%f",&lado2);
				//Imprimindo na tela
				printf("Digite a medida do terceiro lado do triangulo: ");
				//Lendo a variavel
				scanf("%f",&lado3);
				//Imprimindo na tela
				printf("O perimetro do triangulo e:  %2.2f\n\n",lado1+lado2+lado3);
				system("pause");
				system("cls");
			break;
			
			case 5:
				//Calcular o area do círculo
				//Imprmindo na tela
				printf("Digite o raio do circulo: ");
				//lendo a variavel
				scanf("%f",&raio);
				//Calculando
				printf("A area do circulo e: %2.2f\n\n",3.1415*raio*raio);
				system("pause");
				system("cls");
			
			break;
			
			case 6:
				//Calcular perimetro do circulo
				//imprimindo na tela
				printf("Digite o raio do circulo: ");
				//Lendo a variavel
				scanf("%f",&raio);
				//Calculando
				printf("O perimetro do circulo e: %2.2f\n\n",2*3.1415*raio);
				system("pause");
				system("cls");
			break;
							
		}
		
		
		
	}
	while (op!=0);
}
