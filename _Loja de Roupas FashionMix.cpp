#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código da peça de roupa que deseja\n1 - camisa\n2 - calça\n3 - casaco\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Peça: Camisa\n Preço: R$ 50.00\n");
            break;
        case 2:
            printf("Peça: Calça\n Preço: R$ 80.00\n");
            break;
        case 3:
            printf("Peça: Casaco\n Preço: R$ 120.00\n");
            break;
        default:
            printf("Código inválido \n");
    }

    return 0;
}