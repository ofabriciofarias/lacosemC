/*
LACO ENQUANTO com um numero indeterminado de iteracoes
Com mais de uma condicao de verificacao
*/

#include <stdio.h>

int main(){

    int a, b;

    a = 0;
    b = 0;

    while(a != 5 && b != 4)
    {//INICIO
        scanf("%d%d", &a, &b);
        printf("a = %d e b = %d\n", a, b);
    }//FIM

return 0;
}
