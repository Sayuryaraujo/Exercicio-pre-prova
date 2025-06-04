#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    float valor1, valor2, desconto;
    int pratos, sobremesa, bebida;

    printf("Valor total da conta: \n");
    scanf("%f", &valor2);
    printf("Número de pratos principais pedidos:\n");
    scanf("%d", &pratos);
    printf("Pediu sobremesa? (1: Sim, 2: Não):\n");
    scanf("%d", &sobremesa);
    printf("Pediu bebida? (1: Sim, 2: Não):\n");
    scanf("%d", &bebida);

    if (pratos > 3) {
        desconto+= valor2*0.10; 
    }
    
    if (sobremesa== 1 && bebida== 1) {
        desconto += valor2*0.05; 
    }

 
    valor2= valor2-desconto;

    if (desconto > 0) {
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Valor final da conta: R$ %.2f\n", valor2);
    } else {
        printf("Nenhum desconto aplicado.\n");
        printf("Valor final da conta: R$ %.2f\n", valor2);
    }

    return 0;
}