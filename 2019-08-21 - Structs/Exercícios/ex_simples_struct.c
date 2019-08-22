#include <stdio.h>
#include <string.h>
#include <locale.h>

// struct aluno agora será chamada de Aluno
typedef struct aluno Aluno;
struct aluno {
    char nome_aluno[30];
    char curso[30];
    float coeficiente;
    int ra;
};

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno_1;
    Aluno aluno_2;

    // inicialização
    Aluno aluno_3 = {"Maria", "letras", 0.8, 14000};

    // atribuição
    aluno_1.ra = 10500;
    aluno_1.coeficiente = 0.7;
    strcpy(aluno_1.nome_aluno, "Emanoeli");
    strcpy(aluno_1.curso, "Engenharia de computação");

    // scanf
    printf("Informe nome, curso, ra e coeficiente:\n");
    scanf("%[^\n]s", aluno_2.nome_aluno);
    __fpurge(stdin);
    scanf("%[^\n]s", aluno_2.curso);
    scanf("%d", &aluno_2.ra);
    scanf("%f", &aluno_2.coeficiente);

    printf("\n");
    printf("Nome: %s\n", aluno_1.nome_aluno);
    printf("Curso: %s\n", aluno_1.curso);
    printf("Coeficiente: %.2f\n", aluno_1.coeficiente);
    printf("RA: %d\n", aluno_1.ra);
    printf("\n");
    printf("Nome: %s\n", aluno_2.nome_aluno);
    printf("Curso: %s\n", aluno_2.curso);
    printf("Coeficiente: %.2f\n", aluno_2.coeficiente);
    printf("RA: %d\n", aluno_2.ra);
    printf("\n");
    printf("Nome: %s\n", aluno_3.nome_aluno);
    printf("Curso: %s\n", aluno_3.curso);
    printf("Coeficiente: %.2f\n", aluno_3.coeficiente);
    printf("RA: %d\n", aluno_3.ra);

    return 0;
}
