//BLIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//FUN��O PARA RETORNAR O VALOR PARA O USUARIO COM ZEROS A ESQUERDA
int retornaValor(int l,int c){
	
	//SE A COLUNA FOR MENOR QUE 10 E A LINHA FOR MENOR QUE 10 PREENCHA COM ZEROS A ESQUERDA
	if(c<10 && l<10){
		//ESSE RETURN � PARA RETORNA O VALOR NO LUGAR DA FUN��O
		return printf("|0%d 0%d",l,c);	
	}else if(l<10){
		//SE LINHA FOR MENOR QUE 10 ENT�O ASCRESCENTE O ZERO A ESQUERDA NA LINHA
		return printf("|0%d %d",l,c);
	}else if(c<10){
		return printf("|%d 0%d",l,c);
	}else{
		//SE NENHUMA FOR COMPATIVEL COM AS OUTRAS CONDI��ES ENT�O EXECUTE O 'SEN�O'
		return printf("|%d %d",l,c);
	}
	
	//AGORA IREMOS COLOCAR ESSA FUN��O NA PRIMEIRA CONDI��O DO IF NA FUN��O PRINCIPAL
	//QUE � O MAIN
	
	
}

//FUN��O MAIN
int main(){
	
	//VARIAVEIS
	int linhas,colunas,l,c;
	int op=0;
	
	//PRINTAR MENSAGEM PARA O USUARIO
	printf("|CRIANDO UMA MATRIX QUADRADA|\n");
	
	//ESSE LOOP FUNCIONA COMO SE FOSSE WHILE,MAS MESMO QUE N�O SEJA VERDADEIRO ELE IR� 
	//FAZER O 'DO', QUE SIGNIFICA 'FA�A'
	do{
		
		//PEDI AO USUARIO QUE DIGITE A QUANTIDADES DE LINHAS QUE DESEJA
		printf("Digite a Quantidade de Linhas:");
		scanf("%d",&linhas);
		
		//PEDI AO USUARIO A QUANTIDADE DE COLUNAS
		printf("Digite a Quantidade de Colunas:");
		scanf("%d",&colunas);
		
		//D� O ESPA�AMENTO PARA N�O FICAR MUITO JUNTO QUANDO FOR DIGITAR
		printf("\n");
		
		//LOOP PARA CRIAR A MATRIZ DE LINHAS E COLUNAS DE ACORDO COM A QUANTIDADE QUE O USUARIO
		//DIGITAR
		for(l=1;linhas >= l;l++){
			for(c=1;colunas>=c;c++){
				
				//SE A COLUNA FOR IGUAL A 1,ELE SER� PREENCHIDO COM ZEROS PARA QUE FIQUE 
				//ORGANIZADO A MARIX
				if(c==1){
					retornaValor(l,c);	
				}else if(c == colunas){
					//SE O VALOR DA VARIAVEL EM C FOR IGUAL AO LOOP FA�A ESSA CONDI��O
					//FA�A O MESMO TRATAMENTO PARA OS ZEROS A ESQUERDA APENAS ACRESCENTANDO
					//O \N PARA PULAR DE LINHA,J� QUE ESSE � O FINAL DA MATRIX
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
			//AGORA FA�A UMA PERGUNTA PARA O USARIO SE O MESMO DESEJAR FAZER
			//NOVAMENTE A MATRIX
			printf("\n\n Deseja refazer a Matrix? S=1 e N=5:");
			scanf("%d",&op);
			
			//VARIAVEL OP PARA FAZER CAPTURAR A DECIS�O DO USUARIO
			
			//AGORA COLOCAREMOS UM WHILE PARA PARA QUE EE VERIFIQUE QUAL A DECIS�O
			//E EXECUTE DE ACORDO QUE O USUARIO DESEJA
			//A LOGICA � O SEGUINTE ENQUANTO O OP FOR IGUAL A 1 ELE CONTINUAR� A EXECUTAR 
			//SEN�O ELE FINALIZAR� O PROGRAMA
		}while(op != 5);
		
		//INDENTAR O SEU CODIGO O TORNAR ORGANIZADO
		//AGORA IREMOS TESTAR PARA VERIFICAR SE EST� FUNCIONANDO
	
}

//ESPERO QUE TENHAM GOSTADO AT� A PROXIMA!!!!

