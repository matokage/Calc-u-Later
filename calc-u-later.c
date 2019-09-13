#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int i,j;
	float a,b,c,d;
	char choice;

	while(1)
	{
		system("cls");
		printf("#=================================#\n#        Calc-u-Later V0.5        #\n#=================================#\n|Escolha uma fun��o:\n|1= Soma\n|2= Subtra��o\n|3= Divis�o\n|4= Multiplica��o\n|5= Fahrenheit para Celcius\n|6= �rea do Tri�ngulo\n|7= Seno e Cosseno de um triangulo\n|8= Real > Dolar\n|9= MRUv\n|10= Custo de piso\n|11= Volume e Massa de uma esfera\n|12=Sensa��o Termica\n|99=Sair\n#=================================#\nExecutar: ");
		scanf("%d",&choice);
	switch (choice)
		{
		case 0:
			
			system("cls");
			printf("Calc-u-later V0.5\nSeptember 2019\nMatokage\nReleased under GNU General Public License v3.0\n");
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 1:

			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A soma desses numeros �: %d\n\n",i+j);
			i=0;
			j=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 2:

			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A subitra��o desses numeros �: %d\n\n",i-j);
			i=0;
			j=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;
			
		case 3:

			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A divis�o desses numeros �: %d\nSendo o resto: %d\n\n",i/j,i%j);
			i=0;
			j=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 4:

			printf("Insira um numero: ");scanf("%d",&i);
			printf("Insira um segundo numero: ");scanf("%d",&j);
			printf("A multiplica��o desses numeros �: %d\n\n",i*j);
			i=0;
			j=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 5:

			printf("Insira a temperatura em Fahrenheit: ");scanf("%d",&i);
			printf("A temperatura em Celcius �: %d\n\n",((i-32)/1,8));
			i=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 6:

			printf("Insira o valor da altura (h): ");scanf("%f",&a);
			printf("Insira o valor da base: ");scanf("%f",&b);
			printf("A �rea do triangulo �: %f\n\n",((a*b)/2));
			a=0;
			b=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 7:

			printf("Insira o valor do cateto oposto(a): ");scanf("%f",&a);
			printf("Insira o valor do cateto adjacente(b): ");scanf("%f",&b);
			c=sqrt((pow(a,2))+(pow(b,2)));
			printf("O Seno de a �: %.3f\nO Cosseno de A � %.3f\n\n",b/c,a/c);
			a=0;
			b=0;
			c=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 8:

			printf("Insira o valor em Dollar: ");scanf("%f",&a);
			printf("Insira a cota��o do Dollar em Reais: ");scanf("%f",&b);
			printf("A quantia em Reais �: %.2f\n\n",a*b);
			a=0;
			b=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();	
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
			printf("Pressione qualquer tecla para continuar: ");
			getch();	
			break;
			
		case 10:

			printf("insira o comprimento da sala: ");scanf("%f",&a);
			printf("insira a largura da sala: ");scanf("%f",&b);
			printf("insira o valor do piso por m�: ");scanf("%f",&c);
			printf("O custo ser� de R$%.2f\n\n",(a*b)*c);
			a=0;
			b=0;
			c=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 11:
			
			printf("insira o raio da esfera: ");scanf("%f",&a);
			printf("insira a densidade do material: ");scanf("%f",&b);
			printf("O volume da esfera �: %.2f\nCom �rea de %.2f\nE massa %.2f\n\n",(4/3*M_PI*a*3),(4*M_PI*a*2),b*(4/3*M_PI*a*3));
			a=0;
			b=0;
			c=0;
			printf("Pressione qualquer tecla para continuar: ");
			getch();
			break;

		case 12:	
		
			printf("Insira a Temperatura: ");scanf("%f",&a);
			if (a<=0.0)
			{
				printf("Frio pra caralhow!\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else if ((a>0) && (a<=10))
			{
				printf("T� frio, fecha a janela!\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else if ((a>10) && (a<=20))
			{
				printf("T� fresco! :^)\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else if ((a>20) && (a<=25))
			{
				printf("Ideal pra sair de casa\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else if ((a>25) && (a<=30))
			{
				printf("N�o quero ventilador, t� calor pra caralho!\n");
				Sleep(1000);
				printf("Quero ar condicionado\n");
				Sleep(1000);
				printf("Quero ar condicionado\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else if (a>30)
			{
				printf("D:\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
			else
			{
				printf("Deu Ruim :(\n");
				a=0;	
				b=0;
				c=0;
				printf("Pressione qualquer tecla para continuar: ");
				getch();
				break;
			}
		
		case 99:
			
			printf("Adeus\n");
			Sleep(2000);
			return 1;

		default :
			
			printf("\nFun��o inv�lida\n");
			break;
		}
	}
	getch();
	return 0;
}
