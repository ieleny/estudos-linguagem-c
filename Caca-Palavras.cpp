//DEFININDO AS BLIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//DEFININDO A MATRIZ COM AS PALAVRAS QUE ESTARÃO NO CAÇA PALAVRAS
	//3 LINHAS e 100 COLUNAS
	char Palavras[3][18] = {"leao","elefante","jaguar"};
	char Letras  [5] = {'a','b','c'};
	
	//TESTANDO NO LOOP
	for(int i =0; i<3;i++){
		for(int l=0;l<3;l++){
			printf("%i |%s| \n",i,&Letras[i]);
		}
	}
					
	
}


