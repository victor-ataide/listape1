#include <stdio.h>
 
int main() {
 
		float n1,n2;
		char op,op2;
 
 	do{
		printf("---------------\n");
		printf("CALCULADORA\n");
		printf("---------------\n");
 
		printf("numero 1: ");
		scanf("%f",&n1);
 
		printf("escolha sua operacao +,-,*, /:");
		scanf(" %s",&op); 
 
		printf("numero 2: ");
		scanf("%f",&n2);
 
		printf("---------------\n");
 
		switch(op){
		case '+':
			printf("RESULTADO:   %.1f\n",n1+n2);
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
			}
			printf("Quer continuar? (s)(n)");
			scanf("%s", &op2);
	} while (op2 == 's');
 
 
	return 0;
}
