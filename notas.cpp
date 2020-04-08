#include <stdio.h>
#include <stdlib.h>
// Entrar com 4 notas e exibir a media
int main()
{
//Declarando variaveis reais
float a,b,c,d,media;
//Imprimindo na tela
printf("Digite a nota: ");
//Guardando valor na variavel
scanf("%f",&a);
printf("Digite a nota: ");
scanf("%f",&b);
printf("Digite a nota: ");
scanf("%f",&c);
printf("Digite a nota: ");
scanf("%f",&d);
// Calculando
media=(a+b+c+d)/4;
//imprimindo resultado na tela
printf("A media das notas e: %2.2f",media );
}
