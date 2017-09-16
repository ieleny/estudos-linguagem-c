//BLIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//FUNÇÃO PARA RETORNAR O VALOR PARA O USUARIO COM ZEROS A ESQUERDA
int retornaValor(int l,int c){
	
	//SE A COLUNA FOR MENOR QUE 10 E A LINHA FOR MENOR QUE 10 PREENCHA COM ZEROS A ESQUERDA
	if(c<10 && l<10){
		//ESSE RETURN É PARA RETORNA O VALOR NO LUGAR DA FUNÇÃO
		return printf("|0%d 0%d",l,c);	
	}else if(l<10){
		//SE LINHA FOR MENOR QUE 10 ENTÃO ASCRESCENTE O ZERO A ESQUERDA NA LINHA
		return printf("|0%d %d",l,c);
	}else if(c<10){
		return printf("|%d 0%d",l,c);
	}else{
		//SE NENHUMA FOR COMPATIVEL COM AS OUTRAS CONDIÇÕES ENTÃO EXECUTE O 'SENÃO'
		return printf("|%d %d",l,c);
	}
	
	//AGORA IREMOS COLOCAR ESSA FUNÇÃO NA PRIMEIRA CONDIÇÃO DO IF NA FUNÇÃO PRINCIPAL
	//QUE É O MAIN
	
	
}

//FUNÇÃO MAIN
int main(){
	
	//VARIAVEIS
	int linhas,colunas,l,c;
	int op=0;
	
	//PRINTAR MENSAGEM PARA O USUARIO
	printf("|CRIANDO UMA MATRIX QUADRADA|\n");
	
	//ESSE LOOP FUNCIONA COMO SE FOSSE WHILE,MAS MESMO QUE NÃO SEJA VERDADEIRO ELE IRÁ 
	//FAZER O 'DO', QUE SIGNIFICA 'FAÇA'
	do{
		
		//PEDI AO USUARIO QUE DIGITE A QUANTIDADES DE LINHAS QUE DESEJA
		printf("Digite a Quantidade de Linhas:");
		scanf("%d",&linhas);
		
		//PEDI AO USUARIO A QUANTIDADE DE COLUNAS
		printf("Digite a Quantidade de Colunas:");
		scanf("%d",&colunas);
		
		//DÁ O ESPAÇAMENTO PARA NÃO FICAR MUITO JUNTO QUANDO FOR DIGITAR
		printf("\n");
		
		//LOOP PARA CRIAR A MATRIZ DE LINHAS E COLUNAS DE ACORDO COM A QUANTIDADE QUE O USUARIO
		//DIGITAR
		for(l=1;linhas >= l;l++){
			for(c=1;colunas>=c;c++){
				
				//SE A COLUNA FOR IGUAL A 1,ELE SERÁ PREENCHIDO COM ZEROS PARA QUE FIQUE 
				//ORGANIZADO A MARIX
				if(c==1){
					retornaValor(l,c);	
				}else if(c == colunas){
					//SE O VALOR DA VARIAVEL EM C FOR IGUAL AO LOOP FAÇA ESSA CONDIÇÃO
					//FAÇA O MESMO TRATAMENTO PARA OS ZEROS A ESQUERDA APENAS ACRESCENTANDO
					//O \N PARA PULAR DE LINHA,JÁ QUE ESSE É O FINAL DA MATRIX
					if(c<10 && l<10){
						printf(" 0%d 0%d|\n",l,c);	
					}else if(l<10){
						printf(" 0%d %d|\n",l,c);
					}else if(c<10){
						printf(" %d 0%d|\n",l,c);
					}else{
						printf(" %d %d|\n",l,c);
					}
				}else{
					//ESSE TRATAMENTO PARA O MEIO DA MATRIX
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
			//AGORA FAÇA UMA PERGUNTA PARA O USARIO SE O MESMO DESEJAR FAZER
			//NOVAMENTE A MATRIX
			printf("\n\n Deseja refazer a Matrix? S=1 e N=5:");
			scanf("%d",&op);
			
			//VARIAVEL OP PARA FAZER CAPTURAR A DECISÃO DO USUARIO
			
			//AGORA COLOCAREMOS UM WHILE PARA PARA QUE EE VERIFIQUE QUAL A DECISÃO
			//E EXECUTE DE ACORDO QUE O USUARIO DESEJA
			//A LOGICA É O SEGUINTE ENQUANTO O OP FOR IGUAL A 1 ELE CONTINUARÁ A EXECUTAR 
			//SENÃO ELE FINALIZARÁ O PROGRAMA
		}while(op != 5);
		
		//INDENTAR O SEU CODIGO O TORNAR ORGANIZADO
		//AGORA IREMOS TESTAR PARA VERIFICAR SE ESTÁ FUNCIONANDO
	
}

//ESPERO QUE TENHAM GOSTADO ATÉ A PROXIMA!!!!

