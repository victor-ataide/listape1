#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char nome[50];
    int i = 0, tam = 0, espaco_id = 0, r = 0, l = 0;
    
    printf("Nome: ");
    scanf("%[^\n]s", &nome);

    tam = strlen(nome);

    for ( i = 0; i < tam; i++){
        if (nome[i]==' '){
            espaco_id = i;
        }
    }

    for ( i = espaco_id+1; i < tam; i++){
        printf("%c",toupper(nome[i]));
    }

    printf (",");

    for ( i = 0; i < tam; i++){
        if(l==0)r=nome[i];            
                l++;          
        if (nome[i]==' '){
            l=0;
            printf("%c. ",toupper (r));
        }
    }
    

}