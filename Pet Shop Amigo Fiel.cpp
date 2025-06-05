#include <stdio.h>

 typedef struct {
    char nome[55];
    char tipo[35];
    int idade;
} Animal;

Animal animal[5];

void mostrarAnimaisVelhos() {

int tamanho;
	
    printf("mostrar animais com mais de 5 anos:\n");
    for (int i = 0; i < tamanho; i++) {
        if (animal[i].idade > 5) {
            printf("Nome: %s\n", animal[i].nome);
        }
    }
}

int main() {
    
    int i;

  
    for (i = 0; i < 6; i++) {
        printf("---Cadastro do animal %d:\n---", i + 1);
        
        printf("Digite o nome: \n");
        scanf("%s", animal[i].nome);

        printf("Digite o tipo: \n");
        scanf("%s", animal[i].tipo);

        printf("Digite a idade: \n");
        scanf("%d", &animal[i].idade);
    }

  
  

    return 0;
}