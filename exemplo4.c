/*
Somar as notas de 5 alunos
*/

#include <stdio.h>

int main(){

    int i, max;
    float nota, total;

    max = 5;
    total = 0;

    for(i = 0; i < max; i++){
        printf("Digite a nota do aluno %d = ", (i+1));
        scanf("%f", &nota);

        total = total + nota;
        printf("Nota total provisoria = %f\n", total);
    }

    printf("A soma total das notas = %f\n", total);


return 0;
}
