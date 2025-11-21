#include <stdio.h>

struct aluno{
    char nome[50];
    int idade;
    float nota;
};

int main()
{
    struct aluno a[5];
    int i;
    int escolha;

    for (i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", a[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &a[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &a[i].nota);
    }
    for (i = 0; i < 5; i++){
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Nota: %.2f\n", a[i].nota);
    }
    printf("\n");
    printf("Informe o numero do aluno que deseja alterar a nota:");
    scanf("%d", &escolha);
    if (escolha < 1 || escolha > 5){
        printf("Aluno invalido!\n");
       
    }
     escolha--;
    printf("Digite a nova nota para %s: ", a[escolha].nome);
    scanf("%f", &a[escolha].nota);
 
    printf("\nDados atualizados do aluno %d\n", escolha + 1);
    printf("Nome: %s\n", a[escolha].nome);
    printf("Idade: %d\n", a[escolha].idade);
    printf("Nota: %.2f\n", a[escolha].nota);

    return 0;
}