#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main()
{
	char d;
	int bonus = 0;
	int pontuacao;
	int dado1, dado2, dado3;
	int jogada = 0;
	int numero;
	char sl = 's';
	setlocale(LC_ALL,"");
	while(sl == 's')
	{
		system("cls");
		pontuacao = 0;
		jogada++;
		dado1 = rand() % 5 + 1; //Seleciona n�meros de 1 a 6;
		dado2 = rand() % 5 + 1; //Seleciona n�meros de 1 a 6;
		dado3 = rand() % 5 + 1; //Seleciona n�meros de 1 a 6;
		printf("Digite um n�mero ente 1 e 6:\n");
		d=getch();  		// Pega um caracter sem aparecer no video
		numero = atoi(&d);	//Converter em N�mero.
		printf("Os dados sorteadors s�o:\nDado 1: %i\nDado 2: %i\nDado 3: %i\n", dado1, dado2, dado3);
		if(numero == dado1){
			pontuacao++;
		}
		if(numero == dado2){
			pontuacao++;
		}
		if(numero == dado3){
			pontuacao++;
		}
		switch(pontuacao){			
			printf("Parab�ns!!! Voc� acertou o(s) %i dado(s):\n", pontuacao);
			case 1:
				bonus+=10;
				printf("Seu pr�mio � %i pontos.\n", bonus);
				if(numero == dado1){
					printf("Voc� acertou o dado (1).\n");
				}
				if(numero == dado2){
					printf("Voc� acertou o dado (2).\n");
				}
				if(numero == dado3){
					printf("Voc� acertou o dado (3).\n");
				}
				break;
			case 2:
				printf("Seu bonus era de: %i\n", bonus);
				bonus+=15;
				printf("Voc� ganhou +15 pontos pelo acerto.\n");
				if(numero == dado1 && numero == dado2){
					printf("Voc� acertou os dados (1) e (2).\n");
				}
				if(numero == dado1 && numero == dado3){
					printf("Voc� acertou os dados (1) e (3).\n");
				}
				if(numero == dado2 && numero == dado3){
					printf("Voc� acertou os dados (2) e (3).\n");
				}
				switch(numero){
					case 1:
						printf("A dupla de 1, Voc� recebeu um bonus de: +10 Pontos\n");
						bonus+=10;
						break;
					case 2:
						printf("A dupla de 2, Voc� recebeu um bonus de: +20 Pontos\n");
						bonus+=20;
						break;
					case 3:
						printf("A dupla de 3, Voc� recebeu um bonus de: +30 Pontos\n");
						bonus+=30;
						break;
					case 4:
						printf("A dupla de 4, Voc� recebeu um bonus de: +40 Pontos\n");
						bonus+=40;
						break;
					case 5:
						printf("A dupla de 5, Voc� recebeu um bonus de: +50 Pontos\n");
						bonus+=50;
						break;
					case 6:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=60;
						break;
				}
				break;
			case 3:
				switch(numero){
					bonus+=30;
					case 1:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=100;
						break;
					case 2:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=120;
						break;
					case 3:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=130;
						break;
					case 4:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=140;
						break;
					case 5:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=150;
						break;
					case 6:
						printf("A dupla de 6, Voc� recebeu um bonus de: +60 Pontos\n");
						bonus+=160;
						break;
				}
				break;
			default:
				printf("N�o foi dessa vez!!!\n");
		}
		printf("O total de pontos �: %i\n", bonus);
		printf("Total de jogas: %i\n", jogada);
		printf("Deseja jogar novamente (s/n):");
		sl = getche();	
	}
	printf("\nAt� uma proxima vez!!!");
	system("PAUSE");
	return 0;
}
