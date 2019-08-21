#include <stdio.h>
#include <string.h>

typedef struct aluno Aluno;
typedef struct estudante Estudante;
struct aluno {
    char nome[30];
    char curso[30];
    int ra;
};
struct estudante {
    char nome[30];
    char curso[30];
    int ra;
};

int main(void) {
    Aluno aluno_1;
    Aluno aluno_2;
    // Estudante aluno_2; erro ao atribuir estruturas diferentes
    strcpy(aluno_1.nome, "Emanoeli");
    strcpy(aluno_1.curso, "Computação");
    aluno_1.ra = 10000;

    aluno_2 = aluno_1;

    printf("Nome: %s\n", aluno_2.nome);
    printf("Curso: %s\n", aluno_2.curso);
    printf("RA: %d\n", aluno_2.ra);

    return 0;
}
