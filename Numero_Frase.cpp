#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

//OI, VAMOS FAZER UM JOGUINHO DE FORMAR FRASES

//VARIAVEIS
int palavraNum,nomeNum;

//MATRIZES DE CARACTERE
char Palavras [10][100] = {"CRIATIVO","ESTUDIOSOS","CORASOJO","CHATO","EXCELENTE","HONESTO","BABAO","COISADO","BUGADO"};
char Nomes    [10][10]  = {"JOSE","MARIA","JOSEVALDO","CAIQUE","RUAN","BRUNA","PAULO","LEVI","ISAI","JOSENILDO"};

//SETAR PARA QUE OS CARACTERES ESPECIAS NÃO FIQUE SOBRESCRITO
setlocale(LC_ALL,"Portuguese");

//INFORMAÇÕES PARA O USUARIO
printf("DIGITE UM NUMERO DE 0 A 9 \n");
printf("QUAL O NUMERO DO SEU NOME?");
scanf("%d",&palavraNum);
printf("QUAL O NUMERO DA PALAVRA QUE DEFINE?");
scanf("%d",&nomeNum);

if(palavraNum > 9 || nomeNum > 9){
	printf("NUMERO INVALIDO");
}else{
	//LEMBRE-SE C É CASE SENTITIVE
	printf("SEU NOME É %s E SUA PERSONALIDADE É %s",&Nomes[nomeNum],&Palavras[palavraNum]);
}

	
	
}
