#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float x1, x2;
	float delta;
	float y,x0,retaTang1,y0,x,retaTang2;
	
	a = b = c = x1 = x2 = delta = y = x0 = retaTang1 = y0 = x = retaTang2 = 0;
	
	char op = 'n';
	
	printf("Programa para calcular Solucoes de uma funcao do 2 grau.\n");
    printf("Funcao do tipo: ax^2 + bx + c\n");
    
    printf("Digite o valor de a:");
	scanf("%f", &a);
	
	while(a == 0){
		if(op == 's'){
			printf("Digite o valor de a:");
			scanf("%f", &a);
		}
		if(a == 0){ // Alteração - para que caso o usuário insira valor de a = 0, a solicitação se repete.
			printf("Valor incorreto!!!\n");
			printf("Deseja digitar outro valor? (s/n)\n");
			scanf("%c", &op);
			if(op == 'n'){ // Caso o usupario não passe o valor de a, o programa é finalizado.
				return 0;
			}
		}
	}
	printf("Digite o valor de b:");
	scanf("%f", &b);
	
	printf("Digite o valor de c:");
	scanf("%f", &c);
	
	y = pow(b,2)+b+c;
	
	x0 = 2*b;
	
	delta = (b*b)-(4*a*c);
	
	x1 = (-b - sqrt(delta))/(2*a);
	x2 = (-b + sqrt(delta))/(2*a);
	
	printf("Valor de x1: %.2f \n", x1);
	
	printf("Valor de x2: %.2f \n", x2);
	
	printf("O valor do Y e : %.2f \n",y);
	
	printf("O valor do coeficente angular e : %.2f \n",x0);	
	
	printf("O valor da reta Tangente e : (Y -  %.2f ", y);
	
	printf(") = %.2f",x0);
	
	printf("(X - %.2f",b,"%.2f)");
	
	return 0;
	
}
	
