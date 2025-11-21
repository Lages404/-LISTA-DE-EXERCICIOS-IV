#include <stdio.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct aluno a[4];
    int qtd = 0;
    int opcao;
    int i, pos;

    do {
        printf("\n    MENU    \n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Exibir alunos\n");
        printf("3 - Remover aluno\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (qtd == 4) {
                printf("Limite de 4 alunos atingido.\n");
            } else {
                printf("Nome: ");
                scanf("%s", a[qtd].nome);   
                printf("Idade: ");
                scanf("%d", &a[qtd].idade);

                printf("Nota: ");
                scanf("%f", &a[qtd].nota);

                qtd++;
                printf("Aluno cadastrado!\n");
            }
        }

        if (opcao == 2) {
            if (qtd == 0) {
                printf("Nenhum aluno cadastrado.\n");
            } else {
                for (i = 0; i < qtd; i++) {
                    printf("\nAluno %d:\n", i);
                    printf("Nome: %s\n", a[i].nome);
                    printf("Idade: %d\n", a[i].idade);
                    printf("Nota: %.2f\n", a[i].nota);
                }
            }
        }

        if (opcao == 3) {
            if (qtd == 0) {
                printf("Nenhum aluno para remover.\n");
            } else {
                printf("Escolha a posicao (0 a %d): ", qtd - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= qtd) {
                    printf("Posicao invalida.\n");
                } else {
                    for (i = pos; i < qtd - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    qtd--;
                    printf("Aluno removido.\n");
                }
            }
        }

    } while (opcao != 0);
     printf("Programa encerrado!\n");
    return 0;
}
