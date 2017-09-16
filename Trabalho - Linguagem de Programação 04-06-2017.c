// TODO (ieleny#1#): Feito po Ieleny Filgueira em 04-06-2017

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//DECLARAÇÃO DAS FUNÇÕES
void cadastrar();
void Menus();
void DesenhaTitulo();


//FUNÇÃO MAIN
int main (){

     setlocale(LC_ALL, "Portuguese");

     DesenhaTitulo();
     Menus();



     return 0;
}


//FUNÇÃO DE CADASTRAR
void cadastrar(){

    //CRIAÇÃO DO PONTEIRO DE ARQUIVO
    FILE *Arquivo  = fopen("IMC.txt","a");;

    //ABRIR E CRIAR O ARQUIVO
    //ab é uma nomenclatura que a significa abrir o arquivo e b que se tiver algo escrito irá colocar no final do arquivo em vez de sobescrever


    if(Arquivo == NULL){
       printf("NÃO CONSEGIU ABRIR O ARQUIVO PARA SALVAR OS DADOS, POR FAVOR TENTE NOVAMENTE OU CONTATE O ADMINISTRADOR");
    }

    float peso,altura,resultado;
    char genero, op;

    do{

        printf("\n    |------------------------------------------------|");
        printf("\n    |       DIGITE SEUS DADOS PARA SABER SEU IMC     |");
        printf("\n    |------------------------------------------------|");
        printf("\n    | Qual o seu Genêro[F/M]:                        |");
        scanf("%s",&genero);
        printf("    | Qual seu Peso:                                 |");
        scanf("%f",&peso);
        printf("    | Qual a sua Altura:                             |");
        scanf("%f",&altura);

        //CALCULO DO IMC
        resultado =  peso / (altura * altura);

        printf("\n    |------------------------------------------------|");
        printf("\n                Seu IMC foi: %0.4f",          resultado);
        printf("\n    |------------------------------------------------|");

        //GRAVAR NO ARQUIVO
        fprintf(Arquivo,"O GENERO %s o PESO %f a ALTURA %f e o IMC %f",genero,peso,altura,resultado);

        printf("\n\n  Gravar novo Dado?[S/N]");
        scanf("%s",&op);

    }while(op == 'S' || op  == 's');

    fclose(Arquivo);

}

//FUNÇÃO DOS MENUS;
void Menus(){

   int i;

   printf("\n     |------------MENU -----------------|");
   printf("\n     | 1- INSERIR USUARIOS              |");
   printf("\n     | 2- LISTA DE USUÁRIOS CADASTRADOS |");
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
            printf("OS DADOS CADASTRADOS SÃO:");
    break;

    case 3:
            system("exit");
    break;

   }
}

//FUNÇAO UE DESENHA NA TELA TITULO
void DesenhaTitulo(){

            //VARIAVEIS DE CONTROLE DO WHILE
             char opc  = "";
             int ENTER = 13;

             //ENQUANTO NÃO FOR PRESSIONADO O ENTER NÃO FUNCIONARÁ
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

 }


