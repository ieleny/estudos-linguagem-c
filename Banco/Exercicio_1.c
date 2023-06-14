#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

#define numeroUSER 3

char nome[numeroUSER][100] = {"Carlos","Pedro","Antonio"};
int conta[numeroUSER] = {20180,32090,31092};
int agencia[numeroUSER] = {197,109,197};
float saldo[numeroUSER] = {1200,300,600};
int senha[numeroUSER] = {1234, 1234, 1234};
char logar();
int main(){
    int indice = 2;
    printf("\nNome: %s",nome[indice]);
    printf("\nConta: %i",conta[indice]);
    printf("\nAgencia: %i",agencia[indice]);
    printf("\nSaldo: %.2f",saldo[indice]);
    printf("\nSenha: %i\n",senha[indice]);
    if(logar() == 's'){
        printf("Logado");
    }else{
        printf("Falha");
    }
    return 0;
}
char logar(){
    int contaLOG, agenciaLOG, senhaLOG;
    printf("\nSeja bem vindo ao sistema bancário!!");
    printf("Digite sua Conta:");
    scanf("%d", &contaLOG);
    printf("Digite sua Agência:");
    scanf("%d", &agenciaLOG);
    printf("Digite sua Senha:");
    scanf("%d", &senhaLOG);

    int x;
    char resultado = 'n';

    for(x=0; x<numeroUSER; x++){
        if(agencia[x] == agenciaLOG && conta[x]==contaLOG && senha[x]==senhaLOG){
            resultado = 's';
        }
    }
    return resultado;
}

