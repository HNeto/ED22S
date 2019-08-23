#include <stdio.h>

typedef struct aluno Aluno;
struct aluno {
    char nome[50];
    int ra;
    float notas[3];
};

int main(void) {
    Aluno vetor[3];
    int i, j;
    for(i = 0; i < 3; i++) {
        printf("Informe o nome: ");
        scanf("%[^\n]s", vetor[i].nome);
        printf("Informe o ra: ");
        scanf("%d", &vetor[i].ra);
        for(j = 0; j < 3; j++) {
            printf("Informe a nota %d: ", j + 1);
            scanf("%f", &vetor[i].notas[j]);
        }
        __fpurge(stdin);
    }

    for(i = 0; i < 3; i++) {
        printf("Nome: %s\n", vetor[i].nome);
        printf("RA: %d\n", vetor[i].ra);
        for(j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, vetor[i].notas[j]);
        }
    }

    return 0;
}
