/*
Exercicio

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o sal�rio e n�mero de filhos.

A prefeitura deseja saber:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at� R$100,00.
O final da leitura de dados se dar� com a entrada de um sal�rio negativo. (Use o comando
ENQUANTO-FA�A)

*/

//Salario e n_filhos

#include <stdio.h>

int main(){

    int nFilhos;
    float salario;
    int qtd = 0;
    float somaSalarios = 0;
    float mediaSalarios;
    float somaFilhos = 0;
    float mediaNFilhos;
    float maiorSalario = 0;
    int qtdMenorQue100 = 0;

    while(salario >= 0){

        printf("Digite seu salario = ");
        scanf("%f", &salario);

        if(salario >= 0){
            printf("Digite o numero de filhos = ");
            scanf("%d", &nFilhos);

            if(nFilhos < 0){
                nFilhos = nFilhos * -1;
            }
            somaFilhos = somaFilhos + nFilhos;

            //Somat�rio de todos os salarios
            somaSalarios = somaSalarios + salario;
            qtd = qtd + 1;

            //Resolve o maior salario
            if(maiorSalario < salario){
                maiorSalario = salario;
            }

            //Resolve a quantidade que ganha menos que 100 reais
            if(salario <= 100){
                qtdMenorQue100++;
            }
        }
    }

    //printf("Soma dos Salarios = %f\n", somaSalarios);
    //printf("Quantidade de  Salarios = %d\n", qtd);

    mediaSalarios =  somaSalarios/qtd;

    printf("(a) A media do salario da populacao = %.2f\n", mediaSalarios);

    mediaNFilhos = somaFilhos/qtd;

    printf("(b) A media de filhos da populacao = %.2f\n", mediaNFilhos);

    printf("(c) O maior salario = %.2f\n", maiorSalario);

    printf("(d) A quantidade de pessoas que recebem ate 100 = %d\n", qtdMenorQue100);

return 0;
}
