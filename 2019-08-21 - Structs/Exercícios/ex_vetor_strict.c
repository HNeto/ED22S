#include <stdio.h>
#include <string.h>

typedef struct aluno Aluno;
struct aluno {
    char nome[30];
    char curso[30];
    int ra;
};

int main(void) {
    Aluno vetor_alunos[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("Informe o nome: ");
        scanf("%[^\n]s", vetor_alunos[i].nome);
        __fpurge(stdin);
        printf("Informe o curso: ");
        scanf("%[^\n]s", vetor_alunos[i].curso);
        printf("Informe o RA: ");
        scanf("%d", &vetor_alunos[i].ra);
        __fpurge(stdin);
        printf("\n---------\n");
    }

    for(i = 0; i < 3; i++) {
        printf("Nome: %s\n", vetor_alunos[i].nome);
        printf("Curso: %s\n", vetor_alunos[i].curso);
        printf("RA: %d\n", vetor_alunos[i].ra);
        printf("\n---------\n");
    }

    return 0;
}
