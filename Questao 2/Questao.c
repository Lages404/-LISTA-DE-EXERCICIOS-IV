#include <stdio.h>

struct aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    struct aluno a[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", a[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &a[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &a[i].nota);
    }
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Nota: %.2f\n", a[i].nota);
    }
    return 0;
}