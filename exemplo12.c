/*
Utilizando o REPITA....ATE QUE
Para um número indeterminado de iterações
*/

#include <stdio.h>

int main(){

    int op = 0;

    do{
        printf("::::MENU DE OPCOES::::\n");
        printf("1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n5- Sair\n");
        scanf("%d", &op);

        if(op >= 1 && op <= 4){
            int a, b;
            float r;
            printf("Digite os valores de a e b\n");
            scanf("%d%d", &a, &b);

            if(op == 1){
                printf("Soma = %d\n", (a+b));
            }else if(op == 2){
                printf("Subtracao = %d\n", (a-b));
            }else if(op == 3){
                printf("Multiplicacao = %d\n", (a*b));
            }else{
                if(b == 0){
                    printf("Impossivel Dividir\n");
                }else{
                    r = (float) a/b;
                    printf("Divisao = %.2f\n", r);
                    //printf("Divisao = %d\n", (a/b));
                }
            }
        }else if(op == 5)
            printf("Obrigado por utilizar o programa, saindo\n");
        else
            printf("Entrada Invalida, tente outra vez\n");


    }while(op != 5);

    //printf("%d\n", op);
return 0;
}
