/*
Criar uma estrutura PARA/for com decremento
*/
#include <stdio.h>

int main(){

    int i;

    printf(":::Contador Decrescente:::\n");
    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }

    printf("\n\n:::Contador Crescente:::\n");
    for(i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
}
