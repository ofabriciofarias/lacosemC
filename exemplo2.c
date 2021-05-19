/*
Receber 10 valores e vou apresentar apenas os valores positivos ao usuario
*/

#include <stdio.h>

int main(){

    int valor, i;

    for(i = 0; i <= 9; i++){
        printf("Digite o valor = ");
        scanf("%d", &valor);

        if(valor >= 0){
            printf("Valor = %d\n", valor);
        }
    }

return 0;
}
