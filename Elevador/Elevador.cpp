#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d,a,c;
	
	do{
		setlocale(LC_ALL,"");
		
		printf("     Painel do Elevador - INTERNO \n");
		printf(" ---------------------------\n");
		for(int i = 1; i <= 20; i++){
			printf(" |          ");
			printf(" |%d|",i);
			printf("           |\n");
		}
		printf(" | 21 - Botão de Emergencia |\n");
		printf(" --------------------------\n");
		
		printf(" DIGITE SEU ANDAR:");
		scanf("%d",&d);
		
		if(d == 1){
		    printf("  SEU ANDAR É: %d \n",d);
			printf("  ANTERIOR É: 1\n");	
		}else if(d == 21){
			printf("  MORREU!!!");
		}else{
			printf("  SEU ANDAR É: %d \n",d);
			printf("  ANTERIOR É: %d\n",a);
		}
		
		a = d;
		
	}while(d != 21);
	
	
	
	
  return 0;	
}
