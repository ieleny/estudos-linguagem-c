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
		printf(" | 21 - Bot�o de Emergencia |\n");
		printf(" --------------------------\n");
		
		printf(" DIGITE SEU ANDAR:");
		scanf("%d",&d);
		
		
		if(a == 0){
		    printf("  SEU ANDAR �: %d \n",d);
			printf("  ANTERIOR �: 1\n");	
		}else if(d == 21){
			printf("  MORREU!!!");
		}else{
			printf("  SEU ANDAR �: %d \n",d);
			printf("  ANTERIOR �: %d\n",a);
		}
		
		
		if(a < d){
			printf("SUBINDO");
		}else{
			printf("DESCENDO");
		}
		
		a = d;
		

		
	}while(d != 21);
}
