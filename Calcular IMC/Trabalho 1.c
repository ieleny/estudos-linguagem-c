// TODO (ieleny#1#): Feito po Ieleny Filgueira em 04-06-2017

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//DECLARA��O DAS FUN��ES
void cadastrar();
void Menus();
void DesenhaTitulo();
void Listar();
void DesenhaCabecalh();


//FUN��O MAIN
int main (){

     setlocale(LC_ALL, "Portuguese");

     DesenhaTitulo();
     Menus();



     return 0;
}

//FUN��O QUE LISTAR //QUANTAR QUANTOS TEM E O CONTEUDO DA LISTA
void Listar(){
	
	//CRIA��O DO PONTEIRO DE ARQUIVO
    FILE *Arquivo=fopen("IMC.txt","r");
    char nome[100];
    int quantidade = 0,op=0,p = 0;


    if(Arquivo == NULL){
       printf("\n N�O FOI POSSIVEL ABRIR O ARQUIVO PARA fAZER A LEITURA DOS DADOS, POR FAVOR TENTE NOVAMENTE OU CONTATE O ADMINISTRADOR");
    }
    	
    	DesenhaCabecalh();
    	
    	printf(" \n ----------------------- LEITURA DOS ARQUIVOS  ------------------------------");
    
	    while(fgets(nome,30,Arquivo) != NULL){
	    	printf("%s",nome);
	    	++quantidade;
	    	
	    	if(quantidade == 8){
	    		 ++p;
	    		quantidade = 0;
			}
	    	
		}

    printf("\n\n  H� %d Usuarios Cadastrados",p);
    printf(" \n -------------------------------------------------------------------------------- ");
    fclose(Arquivo);
    
	printf("\n\n O que deseja Fazer? digite 1 - para o menu e 2-Para sair do programa: ");	
    scanf("%d",&op);
    
    system("cls");
    
    if(op == 1){
    	
    	Menus();
    	
	}else{
		
		system("exit");
	}
    
	
}


//FUN��O DE CADASTRAR
void cadastrar(){

     
    //CRIA��O DO PONTEIRO DE ARQUIVO
    FILE *Arquivo=fopen("IMC.txt","ab");
    float peso,altura,resultado;
	char genero[1],gener,op,classificacao[20],pessoa[15];


    //ABRIR E CRIAR O ARQUIVO
    //ab � uma nomenclatura que a significa abrir o arquivo e b que se tiver algo escrito ir� colocar no final do arquivo em vez de sobescrever


    if(Arquivo == NULL){
       printf("\n N�O FOI POSSIVEL ABRIR O ARQUIVO PARA SALVAR OS DADOS, POR FAVOR TENTE NOVAMENTE OU CONTATE O ADMINISTRADOR");
    }

	DesenhaCabecalh();
	
    do{
		
        printf("\n    |------------------------------------------------|");
        printf("\n    |       DIGITE SEUS DADOS PARA SABER SEU IMC     |");
        printf("\n    |------------------------------------------------|");
        printf("\n    | Qual o seu Nome?	                             |");
        scanf("%s",&pessoa);
        printf("    | Qual o seu Gen�ro[F/M]:                        |");
        scanf("%s",&genero);
        printf("    | Qual seu Peso:                                 |");
        scanf("%f",&peso);
        printf("    | Qual a sua Altura:                             |");
        scanf("%f",&altura);

        //CALCULO DO IMC
        resultado =  peso / (altura * altura);
		
        printf("\n    |------------------------------------------------|");
        printf("\n                Seu IMC foi: %f",  resultado  		 );
        printf("\n    |------------------------------------------------|");
        
        //VERIFICANDO SE � MULHER OU HOMEM
		if(genero == 'F' || genero == 'f'){
        	
        	if(resultado <= 19){
        	   strcpy(classificacao, "ABAIXO");	
			}
			
			if(resultado >= 19.1 && resultado <= 23.8){
			   strcpy(classificacao, "IDEAL");
			}
			
			if(resultado >= 24.9 && resultado <= 28.3){
			   strcpy(classificacao, "P. ACIMA");
			}
			
			if(resultado >= 29.4 && resultado <= 38.3){
			   strcpy(classificacao, "ACIMA");	
			}	
			
			if(resultado > 39.4){
			   strcpy(classificacao, "OBESO");	
			}
			
		}else{
			
			if(resultado <= 20.7){
        	   strcpy(classificacao, "ABAIXO");		
			}
			
			if(resultado >= 20.7 && resultado <= 24.4){
			   strcpy(classificacao, "IDEAL");		
			}
			
			if(resultado >= 25.5 && resultado <= 29.8){
			   strcpy(classificacao, "P. ACIMA");	
			}
			
			if(resultado >= 30.9 && resultado <= 39.1){
			   strcpy(classificacao, "ACIMA");
			}	
			
			if(resultado > 43.2){
			   strcpy(classificacao, "OBESO");	
			}
			
			
		}
		
		printf("\n    |------------------------------------------------|");
        printf("\n                Sua Situa��o e: %s",     classificacao );
        printf("\n    |------------------------------------------------|");

        //GRAVAR NO ARQUIVO
        //fprintf(Arquivo,"O GENERO %s o PESO %.2f a ALTURA %.2f e o IMC %.2f e o IMC e %.2f",genero,peso,altura,resultado);
		//fputc(genero, Arquivo);
		//fprintf(Arquivo," O nome e %s Genero %s Peso %.2f Altura %.2f IMC %.2f RESULTADO %s \n",pessoa,genero,peso,altura,resultado,classificacao);
		fprintf(Arquivo,"\n O nome e %s ",pessoa);
		fprintf(Arquivo,"\n O Genero e %s ",genero);
		fprintf(Arquivo,"\n O Peso e %.2f ",peso);
		fprintf(Arquivo,"\n O Altura e %.2f",altura);
		fprintf(Arquivo,"\n O IMC e %.2f ",resultado);
		fprintf(Arquivo,"\n A Situa��o e %s ",classificacao);
		fprintf(Arquivo,"\n|---------------------------|");
		
        printf("\n\n  Gravar novo Dado?[S/N]");
        scanf("%s",&op);

    }while(op == 'S' || op  == 's');
	
    fclose(Arquivo);
    system("cls");
    Menus();

}

//FUN��O DOS MENUS;
void Menus(){

   int i;
   
   DesenhaCabecalh();
   
   printf("\n     |------------MENU -----------------|");
   printf("\n     | 1- INSERIR USUARIOS              |");
   printf("\n     | 2- LISTA DE USU�RIOS CADASTRADOS |");
   printf("\n     | 3- SAIR                          |");
   printf("\n     |----------------------------------|");

   printf("\n\n     Digite o numero da sua respectiva escolha:");
   scanf ("%d",&i);

   system("cls");

   switch(i){

    case 1:
            cadastrar();
    break;

    case 2:
            Listar();
    break;

    case 3:
            system("exit");
    break;

   }
}

//FUN�AO UE DESENHA NA TELA TITULO
void DesenhaTitulo(){

            //VARIAVEIS DE CONTROLE DO WHILE
             char opc  = NULL;
             int ENTER = 13;

             //ENQUANTO N�O FOR PRESSIONADO O ENTER N�O FUNCIONAR�
             do{

                printf("\n                       CALCULO DO IMC");

                printf("\n   |------|  -------                        --------- |-----------------------|");
                printf("\n   |------|  --------                      ---------- |-----------------------|");
                printf("\n   |------|  ---------                    ----------- |-----------------------|");
                printf("\n   |------|  ----------                  ------------ |--------|               ");
                printf("\n   |------|  -----------                ------------- |--------|               ");
                printf("\n   |------|  ------------              -------------- |--------|               ");
                printf("\n   |------|  -------------            --------------- |--------|               ");
                printf("\n   |------|  --------------          -------  ------- |--------|               ");
                printf("\n   |------|  -------- ------        -------   ------- |--------|               ");
                printf("\n   |------|  --------  -------------------    ------- |--------|               ");
                printf("\n   |------|  --------   ------------------    ------- |-----------------------|");
                printf("\n   |------|  --------    ----------------     ------- |-----------------------|");
                printf("\n   |------|  --------     --------------      ------- |-----------------------|");

                printf("\n\n        Para continuar aperte no enter !!! \n");

                opc = getch();

             }while(opc != ENTER);
             
             system("cls");

 }
 
 //FUN��O PARA DENHAR O CABE�ALHO
 void DesenhaCabecalh(){
 	
 	printf("\n                       CALCULO DO IMC");

                printf("\n   |------|  -------                        --------- |-----------------------|");
                printf("\n   |------|  --------                      ---------- |-----------------------|");
                printf("\n   |------|  ---------                    ----------- |-----------------------|");
                printf("\n   |------|  ----------                  ------------ |--------|               ");
                printf("\n   |------|  -----------                ------------- |--------|               ");
                printf("\n   |------|  ------------              -------------- |--------|               ");
                printf("\n   |------|  -------------            --------------- |--------|               ");
                printf("\n   |------|  --------------          -------  ------- |--------|               ");
                printf("\n   |------|  -------- ------        -------   ------- |--------|               ");
                printf("\n   |------|  --------  -------------------    ------- |--------|               ");
                printf("\n   |------|  --------   ------------------    ------- |-----------------------|");
                printf("\n   |------|  --------    ----------------     ------- |-----------------------|");
                printf("\n   |------|  --------     --------------      ------- |-----------------------|");
                
                printf("\n");
 	
 }


