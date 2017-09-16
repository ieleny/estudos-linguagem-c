#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//ESTUDANTE IELENY

//VARIAVEIS ARRAY GLOBAIS
char nomes[3][32] = {"João Carlos","Maria Luisa","Pedro José"};
int  ContaVetor[3] = {20180,32090,31092};
int  AgenciaVetor[3] = {197,109,197};
int  SenhaVetor[3] = {1234,1234,1234};
int  SaldoVetor[3] = {1200,300,600};

//VARIAVEIS NORMAIS GLOBAIS
char op = 's';
int e;
int resultado;

//METODOS
void transferencia(int usuario1){
	
	int usuario2,valor1,respostaFor,usuariot;
	char escolha;
	
	printf("\n  SEUS DADOS SÃO:");
	printf("\n  Seu nome é:%s",nomes[usuario1]);
	printf("\n  Sua conta é:%d",ContaVetor[usuario1]);
	printf("\n  Sua Agencia é:%d",AgenciaVetor[usuario1]);
	
	printf("\n  Qual o numero da conta que será feita a transferencia?");
	scanf("%d",&usuario2);
		
	for(int t=0; t < 3;t++){
       
	   if(ContaVetor[t] == usuario2){
	   	
	   	   	printf("\n  O nome é:%s",nomes[t]);
	       	printf("\n  A conta é:%d",ContaVetor[t]);
	       	printf("\n  A Agência é:%d \n",AgenciaVetor[t]);
			respostaFor = 1;     
			usuariot = t;       	
	   }
	}
		
		   if(respostaFor == 1){
		   	
				printf("\n  Digite o Valor:");
           	  	scanf("%d",&valor1);
           	  
           		if(SaldoVetor[usuario1] < valor1){
           		   printf("\n  VOCE NÃO TEM SALDO SUFICIENTE \n");
			  	}else{
				   printf("\n  Valor transferido com sucesso, seu saldo é %d",SaldoVetor[usuario1]-valor1);
				   printf("\n  A conta %s ficou com o saldo %d \n",nomes[usuariot],SaldoVetor[usuariot]+valor1);	 	
				}
			   		
		   }else{
		   	 printf("\n  Conta não encontrada\n");
		   	 transferencia(usuario1); 
		   }
	       
	    
}

void sacar(int valor){
	
	int sal,sac,result;

	printf("  Qual o valor do seu saque?");
	scanf("%d",&sac);
	
	if(SaldoVetor[valor] == sac){
	   sal = SaldoVetor[valor] = 0;
	}else if(SaldoVetor[valor] < sac){
		printf(" NÃO HÁ SALDO SUFICENTE \n");
		sal = SaldoVetor[valor];
	}else{
		result = SaldoVetor[valor] - sac;
		sal = SaldoVetor[valor] = result;
	}
	
	printf("\n O valor do seu agora é: %d",sal);
}

int saldo(int saldo){
	printf("\n Seu saldo é: %d",SaldoVetor[saldo]);
}

void Tela_de_Opcoes(int usuario){
	
	resultado = usuario;
	
    do{
        printf("\n   Seja Bem vindo SR(a): %s",nomes[usuario]);
		printf("\n   1 - SAQUE");
		printf("\n   2 - SALDO");
		printf("\n   3 - TRANSFERENCIA");
		printf("\n   4 - SAIR");
		printf("\n   DIGITE A SUA ESCOLHA:");
		scanf("%d",&e);
		
	//CHAMANDO OS METODOS SACAR,SALDO,TRANSFERENCIA
	if(e == 1){
 		sacar(resultado);
 		Tela_de_Opcoes(resultado);
	}else if(e == 2){
		saldo(resultado);
		Tela_de_Opcoes(resultado);
	}else if(e == 3){
		transferencia(resultado);
		Tela_de_Opcoes(resultado);	
	}else if(e == 4){
		exit(1);
	}	
		
 	}while(e > 4);
			
}

void login(int conta, int agencia, int senha){

	for(int i = 0 ; i <= 3; i++){
		if(ContaVetor[i] == conta 
			&& AgenciaVetor[i] == agencia 
			&& SenhaVetor[i] == senha)
		{   
			Tela_de_Opcoes(i);	
		    op = 'n';
		    
		}else{
			op = 's';
		}
			
	}
}

int main(){

//VARIAVEIS LOCAIS
int contaLogin,agenciaLogin,senhaLogin;
char inicio;

//FORMARTANDO AS VARIAVEIS COM CARACTERES ESPECAIS
setlocale(LC_ALL,""); 

   do{
	
    //INICIAÇÃO DO PROGRAMA
	printf("\n       Bem Vindo ao Sistema do Banco");	
	printf("\n  Para Acessar sua Conta digite seus dados Corretamente");
	printf("\n      Digite sua conta:");
	scanf("%d",&contaLogin);
	printf("      Digite sua Agência:");
	scanf("%d",&agenciaLogin);
	printf("      Digite sua Senha:");
	scanf("%d",&senhaLogin);

	//CHAMANDO FUNÇÕES
	login(contaLogin,agenciaLogin,senhaLogin);
	
	printf("\n  Dados incorretos Deseja Tentar Novamente? [S/N]");
	scanf("%s",&op);
	
	system("cls");

}while(op == 's');
	
}
