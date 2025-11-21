#include <stdio.h>

struct aluno{
    char nome[50];
    int idade;
    float nota;
};

int main(){

    struct aluno a = {"Luis", 18, 24.8};

    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);

    return 0;
}