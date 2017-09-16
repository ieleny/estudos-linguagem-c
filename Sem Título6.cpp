#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
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
		
		
		if(a == 0){
		    printf("  SEU ANDAR É: %d \n",d);
			printf("  ANTERIOR É: 1\n");	
		}else if(d == 21){
			printf("  MORREU!!!");
		}else{
			printf("  SEU ANDAR É: %d \n",d);
			printf("  ANTERIOR É: %d\n",a);
		}
		
		
		if(a < d){
			printf("SUBINDO");
		}else{
			printf("DESCENDO");
		}
		
		a = d;
		

		
	}while(d != 21);
}
