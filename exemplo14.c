/*
Exerc�cio
Construir um algoritmo que calcule a m�dia aritm�tica de v�rios valores inteiros
positivos, lidos externamente. O final da leitura acontecer� quando for lido um valor
negativo.

*/

#include <stdio.h>

int main(){

    int valor, somaValor = 0;
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
        printf("Nao foi possvei calcular a media\n");
    }

return 0;
}