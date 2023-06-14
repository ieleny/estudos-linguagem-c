#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//PROGRAMA SOLICITA AO USUARIO QUANTOS TERMOS DE SERIE ELE DESEJA
//DEVERÁ MOSTRAR O VALOR E UM DETERMINADO TERMO OU RESULTADO SOMATORIO

//VARIAVEIS GLOBAIS
int f,i,q,v = 0;
int *ptr;

//METODOS
int SerieFinita();
int factorial();

int main(){
	
	setlocale(LC_ALL,"");
    
    printf("\n |---------------------------------------------|");
    printf("\n |          CALCULA SERIE FINITA               |");
    printf("\n |---------------------------------------------|");
    	printf("%f",SerieFinita(3));
    printf("\n | QUAIS AS QUANTIDADES DE VALORES?            | ");
    scanf("%d",&q);
    
	//CAPTURAR OS VALORES
	ptr = (int *) malloc(q*sizeof(int));
	
	//VERFICA SE TEM MEMORIA
	if(ptr == NULL){
    	printf(" | FALTA MEMORIA                               |");	
    	return 0;
	}
    
    //LOOP DOS VALORE
    for(i = 0; i < q; i++){
    	printf(" | QUAIS OS VALORES?                           |");
    	scanf("%d",&ptr[v]);
	}
    

	
    printf(" |---------------------------------------------|");
	
}

int SerieFinita(int v){
	
	float formula;
	int p1,p2,p3,p4 = 0;
	
	p1 = (3*(v) - 2);
	p3 =  v - 1; 
	p4 =  v*2;

	//FORMULA
	formula = (pow(p1,p3))/(factorial(p4));
	
	return formula;
	
	
    
}

//FATORIAL
int factorial(int x){
	
	
	for(f = 1 ; x > 1; x = x - 1){ 
		 
		f = f * x; 
	}

    return f;
}

