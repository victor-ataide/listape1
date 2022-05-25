#include <stdio.h> 
#include <stdlib.h> 
void soma(){
    float n1,n2,result;
    printf("Digite o numero 1:\n ");
    scanf ("%f", &n1); 
    printf("Digite o numero 2:\n "); 
    scanf ("%f", &n2); 
    result = n1 + n2;
    printf("Resultado: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}
void subtracao(){
    float n1,n2,result;
    printf("Digite o numero 1:\n ");
    scanf ("%f", &n1); 
    printf("Digite o numero 2:\n "); 
    scanf ("%f", &n2); 
    result = n1 - n2;
    printf("Resultado: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}
 void divisao(){
    float n1,n2,result;
    printf("Digite o numero 1:\n ");
    scanf ("%f", &n1); 
    printf("Digite o numero 2:\n "); 
    scanf ("%f", &n2); 
    result = n1 / n2;
    printf("Resultado: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
 }
 void multiplicacao(){
    float n1,n2,result;
    printf("Digite o numero 1:\n ");
    scanf ("%f", &n1); 
    printf("Digite o numero 2:\n "); 
    scanf ("%f", &n2); 
    result = n1 * n2;
    printf("Resultado: %.2f\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
 }
 void menu(){
    int opcao;

    printf("---------------------CALCULADORA------------------\n");

    printf("Escolha sua operaçao:\n ");
    printf("1- soma\n");
    printf("2- subtracao\n");
    printf("3- divisao\n");
    printf("4- multiplicacao\n");
    printf("5- sair\n");
    printf("operacao: \n");
    scanf("%d", &opcao);
 
 switch (opcao){
    case 1:
     soma();
     break;
    case 2:
     subtracao();
     break;
    case 3:
     divisao();
     break;
    case 4:
     multiplicacao();
     break;
    case 5:
     system("exit");
     printf("encerrando\n");
     break;                   
    default:
     printf("comando inexistente\n"); 
     system ("pause"); 
      system ("cls"); 
      menu(); 
     break;
    }
}
    int main(){
        menu();
        system("pause");

        return 0;
    }