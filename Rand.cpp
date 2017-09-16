#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main()
{
	char d;
	int dado;
	int jogada;
	int numero;
	char sl = 's';
	setlocale(LC_ALL,"");
	while(sl == 's')
	{
		system("cls");
		dado = rand() % 6 + 1; //Seleciona números de 1 a 6;
		jogada = 1;
		printf("Digite um número ente 1 e 6:\n");
		d=getch();  //getch() Pega um caracter sem aparecer no video
		numero = atoi(&d);	//Converter em Número.
		while(numero != dado) 
		{
			printf("%i é Não foi dessa vez. Tente novamente.\n",numero);
			d=getch();
			numero = atoi(&d);
			jogada++;
		}
		printf("%i Parabéns!!! você Acertou!!!\n",numero);	
		printf("Você acertou na %i tentativa.\n", jogada);
		printf("Deseja jogar novamente (s/n)");
		sl = getche();	
	}
	printf("\nAté uma proxima vez!!!");
	system("PAUSE");
	return 0;
}
