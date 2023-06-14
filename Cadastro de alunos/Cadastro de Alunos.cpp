#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//VARIAVEL GLOBAL QUE FAZ O CONTROLE DA QUANTIDADE DE ALUNOS INSERIDOS
int quantMatricula=0;
int quantNome=0;
//VARIAVEL GLOBAL DE OPÇÃO
int op;
//VETORES DOS VALORES QUE SERÃO INSERIDOS
int   matricula[100] = {};
char  nome[][100] = {};
int   nota[100] = {};
//VARIAVEL GLOBAL QUE FAZ O CONTROLE DA INSERÇÃO DE DADOS
int repete;
//VARIVAEL GLOBAL DA MATRICULA
int valmatricula;
//DECLARAR A FUNÇÃO GLOBALMENTE
void MenuDoPrograma();
//VARIAVEL PARA SOMA DO FOR
int t;

//FUNÇÃO PARA AS ESCOLHAS DO USUARIO
int Escolha(int valor){
	
	//DEPENDENDO DO QUE O USUARIO ESCOLHER IRÁ EXECUTAR A AÇÃO
	switch(valor){
		//INSERIR NOMES DOS ALUNOS
		case 1:
			//IREMOS FAZER UM LOOP COM WHILE
			//ENQUANTO O USUARIO DIGITAR UM CERTO NUMERO ACRESCENTE MAIS 1 E INSIRA NO VETOR
			do{
	
				printf("\n|------------------------------------|");
				printf("\n|INSIRA A MATRICULA E O NOME DO ALUNO|");
				printf("\n|------------------------------------|");
				//PRIMEIRO REQUISITA AO USUARIO DIGITAR A MATRICULA			
				printf("\n|DIGITE A MATRICULA:");
				//O VALOR QUE DIGITAR IRA PARA O VETOR MATRICULA E ACRESCENTAR NO INDICE 
				//COM A QUANTIDADE
				scanf("%d",&matricula[quantMatricula]);
				//DIGITAR O NOME  DO ALUNO
				printf("|DIGITE O NOME DO ALUNO:");
				scanf("%s",&nome[quantNome]);
				//SE DEIXASSE OS DOIS COM A MESMA VARIAVEL NÃO IRIA FUNCIONAR CORRETAMENTE
				//VETOR POIS ELE IRIA ACRESCENTAR DOIS EM DOIS E PARA RECUPERAR OS VALORES 
				//SAIRIAM DOS ALUNOS ERRADOS
				printf("|------------------------------------|");
				
				printf("\n|SE DESEJA ACRESCENTAR NOVO ALUNO DIGITE 1 SENÃO DIGITE QUALQUER OUTRO NUMERO?");
				scanf("%d",&repete);
				
				//VARIAVEIS PARA A SOMA DE VEZES QUE ACRESCENTA DADOS
				quantMatricula++;
				quantNome++;
				
				//SE A QUANTIDADE DE MATRICULA CHEGAR A 100
				if(quantMatricula == 100){
				   printf("LIMITE EXCEDIDO,NÃO PODE MAIS INSERIR ALUNOS");
				   MenuDoPrograma();
				}
				//printf("O nome é %d indice é %d",matricula[0],quantMatricula);
				//scanf("%d",&matricula[0]);
				//printf("%d",matricula[0]);			
				
			}while(repete == 1);
			
			//ESSE COMANDO LIMPA A TELAS
			system("cls");
			//QUANDO SAIR DO REPETE IRA APARECER O MENU NOVAMENTE
			MenuDoPrograma();	
	
		break;
		
		//INSERIR NOTAS DOS ALUNOS
		case 2:
		
		   //DIGITAR O VALOR DA MATRICULA	 
		   printf("\n|--------------------------|");
		   printf("\n|INSERIR A NOTA|");
		   printf("\n|DIGITE A MATRICULA:");
		   scanf("%d",&valmatricula);
		    
			 //NA INSERÇÃO DE NOTAS DOS ALUNOS O PROCESSO SERÁ QUASE IGUAL MAS DESSA VEZ IRÁ BUSCAR
		    //ALUNO PELA A MATRICULA E MOSTRAR O NOME, E ASSIM IRÁ COLOCAR A NOTA
		   //VARRER PRIMEIRO O VETOR
		   for(int o=0;o < 10;o++){
		   		//SE O VALOR DA MATRICULA FOR IGUAL AO QUE DIGITAR ENTÃO SENÃO MOSTRE UMA MENSAGEM
				if(matricula[o] == valmatricula){
					
					//INFORMAÇÕES DO ALUNO E CADASTRO DA SUA NOTA
					printf("\n O NOME DO ALUNO É: %s",nome[o]);
					printf("\n DIGITE A NOTA:");
					scanf("%d",&nota[o]);
					printf("\n CADASTRO FEITO COM SUCESSO!!");
					
					printf("\n DESEJA FAZER NOVA BUSCA? S=1 OU N=2");
					scanf("%d",&o);
					if(o == 1){
						//CHAMAR FUNÇÃO DE FORMA RECURSIVA
						Escolha(2);	
					}else{
						system("cls");
						MenuDoPrograma();		
					}
				}
			}
				
				//SE NÃO EXISTIR MATRICULA
				printf("\nMATRICULA NÃO ENCONTRADA!!!!");
				printf("\nDESEJA TENTAR NOVAMENTE S=1 OU N=2?");
				scanf("%d",&t);
				//RESULTADO DO SCANF
				if(t == 1){
					//CHAMAR FUNÇÃO DE FORMA RECURSIVA
					Escolha(2);	
				}else{
					system("cls");
					MenuDoPrograma();		
				}   	
		   
		break;
		
		//VISUALIZAR OS ALUNOS
		case 3:
			
		printf("\n|--------------------------|");
		printf("\n|A LISTA DE ALUNOS DA TURMA|");
			printf("\n| ID ||    MATRICULA   ||        NOME         ||    NOTA    |");
		//NO 3 CASO IRÁ APENAS BUSCAR OS ALUNOS E FORMAR UMA LISTA
		for(int i = 0; i < quantMatricula;i++){
			//FAZ A LISTA DE ALUNOS CADASTRADOS
			printf("\n| %d  ||0%d              ||%s               ||%d   |",i,matricula[i],nome[i],nota[i]);
		}
		//SAIDA DO FOR
		printf("\nDESEJA VOLTAR AO MENU S=1 OU N=2?");
		scanf("%d",&t);
		if(t == 1){
				//CHAMAR FUNÇÃO 
				MenuDoPrograma();	
			}else{
				system("cls");
				Escolha(4);		
			}
		system("cls");
		
		break;	
	}
//return printf("%d",valor);
}

//FUNÇÃO PARA MENU DO PROGRAMA
void MenuDoPrograma(){
	//lOOP PARA A CRIAÇÃO DO MENU
	do{
		//INFORMAÇÃO PARA O USUARIO	
		printf("\n |---------------------------------------------------------------------|");
		printf("\n |Programa que Insere Notas dos Alunos de Uma Turma na Primeira Unidade|");
		printf("\n |---------------------------------------------------------------------|");
		
		//INFORMAÇÕES PARA O USUARIO
		printf("\n |1° - INSERIR NOME DOS ALUNOS	       |");
		printf("\n |2° - INSERIR NOTA DOS ALUNOS	       |");
		printf("\n |3° - VISUALIZAR OS ALUNOS DA TURMA   |");
		printf("\n |4° - SAIR DO PROGRAMA 	       |");
		printf("\n |DIGITE O NUMERO DA AÇÃO	       |");
		//LEITURA DOS DADOS
		scanf("%d",&op);
		system("cls");
		
		//CHAMAR A FUNÇÃO ESCOLHA
		Escolha(op);
		
	}while(op != 4);
}

int main(){
	
	//FORMATANDO OS CARACTERES ESPECIAIS
	setlocale(LC_ALL,""); 
	MenuDoPrograma();
	
	//ATÉ A PROXIMA!!!!
}
