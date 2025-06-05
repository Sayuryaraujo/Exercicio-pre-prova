#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char nome[110];
    int ano;
};

int main() {
    struct Livro livros[8];

    for (int i = 0; i < 8; i++) {
    printf("\n---Livraria anos 2000---\n");
    printf("Cadastro do livro %d\n", i + 1);
    printf("Nome:\n");
    scanf("%s", livros[i].nome);
    printf("Ano de publicacao do livro:\n");
    scanf("%d", &livros[i].ano);
    printf("\n");
    }
    printf("Livros publicados antes do ano 2000:\n");
    for (int i = 0; i < 8; i++) {
    if (livros[i].ano < 2000) {
    printf("Nome: %s  Ano: %d\n", livros[i].nome, livros[i].ano);
    }
    }
    return 0;
}