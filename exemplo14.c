/*
Exercício
Construir um algoritmo que calcule a média aritmética de vários valores inteiros
positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor
negativo.

*/

#include <stdio.h>

int main(){

    int valor=0, somaValor = 0;
    int contador = 0;
    float mediaValor;

    while(valor >= 0){
        printf("Digite um valor = ");
        scanf("%d", &valor);

        if(valor >= 0){
            somaValor = somaValor + valor;
            contador = contador + 1;
        }else{
            printf("Saindo do programa...Processando o valor da media\n");
        }
    }

    if(contador != 0){
        mediaValor = (float) somaValor/contador;
        printf("O valor da media = %.2f\n", mediaValor);
    }else{
        printf("Nao foi possivel calcular a media\n");
    }

return 0;
}
