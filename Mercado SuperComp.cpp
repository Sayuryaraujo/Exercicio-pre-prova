#include <stdio.h>
#include <string.h>

#define TAM 10

struct Produto {
    char nome[50];
    int quantidade;
    float preco;
};

void calcularValorTotal(struct Produto produtos[], int tamanho) {
    float total = 0;

    for (int i = 0; i < tamanho; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }

    printf("Valor total R$ %.2f \n", total);
}

int main() {
    struct Produto produtos[TAM];

    
    for (int i = 0; i < TAM; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %s", produtos[i].nome); 
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preço: R$ ");
        scanf("%f", &produtos[i].preco);
        printf("\n");
    }

   
  

    return 0;
}