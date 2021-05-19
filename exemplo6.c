/*
Laço que repetirar o calculo 5 vezes.
O calculo sera de soma, subtracao, divisao ou multiplicacao
O usuario ira definir qual operacao ele deseja realizar
Se ele escolher uma operacao invalida, deve-se apresentar uma mensagem de erro.
*/

#include <stdio.h>

int main(){

    int i, op;
    float a, b, r;

    for(i = 0; i < 5; i++){

        printf("Escolha uma das operacoes Matematicas\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("Digite sua opcao = ");
        scanf("%d", &op);

        if(op >= 1 && op <= 4){

            //Recebe os valores de a e b
            printf("Digite o valor de a = ");
            scanf("%f", &a);
            printf("Digite o valor de b = ");
            scanf("%f", &b);

            //Condicionais de escolha do calculo matematico
            if(op == 1){
                r = a + b;
                printf("O resultado da soma = %.2f\n", r);
            }else if(op == 2){
                r = a - b;
                printf("O resultado da subtracao = %.2f\n", r);
            }else if(op == 3){
                r = a * b;
                printf("O resultado da multiplicacao = %.2f\n", r);
            }else{
                if(b == 0){
                    printf("Erro: Nao foi possivel dividir por zero\n");
                }else{
                    r = a/b;
                    printf("O resultado da divisao = %.2f\n", r);
                }
            }
        }else{
            printf("Erro: Opcao invalida\n");
        }

        printf("\n\n\n::::::::::::::::::::::::::::::::::\n\n\n");
    }//FIM_FOR

}
