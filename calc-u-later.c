#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int soma(),subi(),divi(),multi(),esco(),fahcel(),triang();
	int i,j;
	float a,b,c,d;
	char choice;
	while(1){

	printf("Escolha uma fun��o:\n1= Soma\n2= Subtra��o\n3= Divis�o\n4= Multiplica��o\n5= Fahrenheit para Celcius\n6= �rea do Tri�ngulo\n7= Seno e Cosseno de um triangulo\n8= Real > Dolar\n9= MRUv\n10= Custo de piso\n11= Volume e Massa de uma esfera\n\nExecutar: ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A soma desses numeros �: %d\n\n",i+j);
			i=0;
			j=0;
			Sleep(1000);
			break;

		case 2:
			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A subitra��o desses numeros �: %d\n\n",i-j);
			i=0;
			j=0;
			Sleep(1000);
			break;
			
		case 3:
			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A divis�o desses numeros �: %d\nSendo o resto: %d\n\n",i/j,i%j);
			i=0;
			j=0;
			Sleep(1000);
			break;
			
		case 4:
			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A multiplica��o desses numeros �: %d\n\n",i*j);
			i=0;
			j=0;
			Sleep(1000);
			break;
			
		case 5:
			printf("Insira a temperatura em Fahrenheit: ");scanf("%d",&i);
			printf("A temperatura em Celcius �: %d\n\n",((i-32)/1,8));
			i=0;
			Sleep(1000);
			break;
			
		case 6:
			printf("Insira o valor da altura (h): ");scanf("%f",&a);
			printf("Insira o valor da base: ");scanf("%f",&b);
			printf("A �rea do triangulo �: %f\n\n",((a*b)/2));
			a=0;
			b=0;
			Sleep(1000);
			break;
			
		case 7:
			printf("Insira o valor do cateto oposto(a): ");scanf("%f",&a);
			printf("Insira o valor do cateto adjacente(b): ");scanf("%f",&b);
			c=sqrt((pow(a,2))+(pow(b,2)));
			printf("O Seno de a �: %.3f\nO Cosseno de A � %.3f\n\n",b/c,a/c);
			a=0;
			b=0;
			c=0;
			Sleep(1000);
			break;
			
		case 8:
			printf("Insira o valor em Dollar: ");scanf("%f",&a);
			printf("Insira a cota��o do Dollar em Reais: ");scanf("%f",&b);
			printf("A quantia em Reais �: %.2f\n\n",a*b);
			a=0;
			b=0;
			Sleep(1000);	
			break;
			
		case 9:
			printf("insira a dist�ncia inicial (m): ");scanf("%f",&a);
			printf("insira a velocidade inicial(m/s): ");scanf("%f",&b);
			printf("insira o tempo percorrido(s): ");scanf("%f",&c);
			printf("insira a acelera��o(m/s�): ");scanf("%f",&d);
			printf("A distancia percorrida �: %.2f\n\n",a+b*c+0.5*d*(pow(c,2)));
			Sleep(1);
			a=0;
			b=0;
			c=0;
			d=0;
			Sleep(1000);	
			break;
			
		case 10:
			printf("insira o comprimento da sala: ");scanf("%f",&a);
			printf("insira a largura da sala: ");scanf("%f",&b);
			printf("insira o valor do piso por m�: ");scanf("%f",&c);
			printf("O custo ser� de R$%.2f\n\n",(a*b)*c);
			a=0;
			b=0;
			c=0;
			Sleep(1000);
			break;
		
		case 11:
			printf("insira o raio da esfera: ");scanf("%f",&a);
			printf("insira a densidade do material: ");scanf("%f",&b);
			printf("O volume da esfera �: %.2f\nCom �rea de %.2f\nE massa %.2f\n\n",(4/3*M_PI*a*3),(4*M_PI*a*2),b*(4/3*M_PI*a*3));
			a=0;
			b=0;
			c=0;
			Sleep(1000);
			break;
			
		default :
			printf("\nFun��o inv�lida\n");
			Sleep(1000);
		}
	}
	getch();
	return 0;
}

