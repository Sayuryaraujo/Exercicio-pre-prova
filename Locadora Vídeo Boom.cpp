#include <stdio.h>

int main() {
    int quantidade;

    do {
    printf("Quantos filmes voce deseja alugar? (1 a 5): \n");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        printf("escolha uma opcao que seja valida\n");
        }
    } while (quantidade < 1 || quantidade > 5);

    printf("Voce escolheu alugar o filme %d \n", quantidade);

    return 0;
}