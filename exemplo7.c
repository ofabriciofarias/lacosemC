/*
Aprenderemos sobre o EQUANTO e faremos uma estrutura com um numero finito de iteracoes
*/

#include <stdio.h>

/*
ALGORITMO
    DECLARE cont NUMERICO

    cont <- 0

    ENQUANTO cont <= 10 FACA
        INICIO
            ESCREVA "Valor do cont = ", cont
            cont <- cont + 1
        FIM

    cont <- 10

    ENQUANTO cont >= 0 FACA
        INICIO
            ESCREVA "Valor do cont = ", cont
            cont <- cont - 1
        FIM
FIM_ALGORITMO
*/
int main(){

    int cont;

    cont = 0;
    printf("::::CRESCENTE::::\n");
    while(cont <= 10){
        printf("Valor do cont = %d\n", cont);
        cont = cont + 1; //cont++; //
    }

    cont = 10;
    printf("\n\n::::DECRESCENTE::::\n");
    while(cont >= 0){
        printf("Valor do cont = %d\n", cont);
        cont--;
    }

return 0;
}
