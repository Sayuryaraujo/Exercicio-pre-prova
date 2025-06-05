#include <stdio.h>

int main() {
    float nota, media;
    float soma = 0;
    int i;

    printf("---Registro de notas de atendiment0---\n");

  
    for (i = 1; i <= 7; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

     
        if (nota < 0 || nota > 10) {
            printf("Nota inválida, Digite um valor entre 0 e 10 \n");
            
        }

        soma += nota;
    }

    
    media = soma / 7;

    printf("Média das notas: %.2f \n", media);

   
    if (media >= 8) {
        printf("Avaliação Boa \n");
    } else if (media >= 5) {
        printf("Avaliação Razoavel \n");
    } else {
        printf("Avaliação Ruim \n");
    }

    return 0;
}