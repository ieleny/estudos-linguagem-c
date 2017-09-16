#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornavalor(int l,int c){
	
		if(c<10 && l<10){
			return printf("|0%d 0%d ",l,c);	
		}else if(l<10){
			return printf("|0%d %d ",l,c);	
		}else if(c<10){
			return printf("|%d 0%d ",l,c);	
		}else{
			return printf("|%d %d ",l,c);	
		}
}

int main(){
	
	int linhas,colunas,l,c;
	int op = 5;
	
	printf("|CRIANDO UMA MATRIX QUADRADA|");
	
	do{
		
		printf("\n|Digite a Quantidade de Linhas:");
		scanf("%d",&linhas);
		printf("|Digite a Quantidade de Colunas:");
		scanf("%d",&colunas);
		
		printf("\n");
		for(l=1;linhas >= l;l++){
			for(c=1;colunas >= c;c++){
				
				if(c == 1){
				   retornavalor(l,c);
				}else if(c == colunas){
					if(c<10 && l<10){
						printf("0%d 0%d|\n",l,c);	
					}else if(l<10){
						printf("0%d %d|\n",l,c);	
					}else if(c<10){
						printf("%d 0%d|\n",l,c);	
					}else{
						printf("%d %d|\n",l,c);	
					}	
				}else{
					if(c<10 && l<10){
						printf(" 0%d 0%d ",l,c);	
					}else if(l<10){
						printf(" 0%d %d ",l,c);	
					}else if(c<10){
						printf(" %d 0%d ",l,c);	
					}else{
						printf(" %d %d ",l,c);	
					}
				}
			
			}
		}	
		
		printf("\n Deseja Refazer a Matrix ? S=1 e N=5 : ");
		scanf("%d",&op);
		
	}while(op != 5 );
	
}
