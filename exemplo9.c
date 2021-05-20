/*
Menu de opcoes, quando o usuario escolher uma entrada invalida sera informado e o sistema pedira uma nova entrada.
Para sair do programa, o usuario deve escolher a opcao 4
*/

#include <stdio.h>


int main(){

    int op;

    op = 0;

    while(op != 4){
        printf(":::MENU DE OPCOES:::\n1 - op1\n2 - op2\n3 - op3\n4 - Sair\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &op);

        if(op == 1){
            printf("Foi escolhida a opcao 1\n");
        }else if(op == 2){
            printf("Foi escolhida a opcao 2\n");
        }else if(op == 3){
            printf("Foi escolhida a opcao 3\n");
        }else if(op == 4){
            printf("Obrigado por usar o programa....Saindo\n");
        }else{
            printf("Opcao invalida, ERRO, tente outra vez\n");
        }
    }

return 0;
}
