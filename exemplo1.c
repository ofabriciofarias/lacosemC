/*
Introduzir o laco PARA em C
*/

#include <stdio.h>

/*
ALGORITMO
    DECLARE i NUMERICO

    PARA i <- 0 ATE 5 FACA
        INICIO
            ESCREVA "Apresentar o valor de i = ", i
            ESCRAVA "Apresenta msg"
        FIM
FIM_ALGORITMO


*/
int main(){

    int i;

    for(i = 0; i <= 5; i++){
        printf("Apresentar o valor de i = %d\n", i); //comando1
        printf("Apresenta msg\n"); //comando2
    }
return 0;
}
