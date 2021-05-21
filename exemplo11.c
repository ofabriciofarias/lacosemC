/*
Problema com um número determinado de iterações
Resolvido com o REPITA....ATE QUE
*/

#include <stdio.h>

int main(){

    int cont = 10;

    do{
        printf("Contador descrescente = %d\n", cont);
        cont--; //cont = cont - 1;

    }while(cont != -1);
return 0;
}
