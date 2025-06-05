#include <stdio.h>

struct Carro {
    char marca[55];       
    int ano;          
    float km;           
};

int main() {
    struct Carro carros[5];
    int i;

  
    printf("---Cadastro de 5 carros---\n");

    for (i = 0; i < 5; i++) {
        printf("qual Carro %d: \n", i + 1);

        printf("Digite a marca: ");
        scanf("%s", carros[i].marca);

        printf("Digite o ano: ");
        scanf("%d", &carros[i].ano);

        printf("Digite a quilometragem: ");
        scanf("%f", &carros[i].km);
    }


    printf("---Carros com mais de 100.000 km rodados---\n");
    int encontrou = 0;

    for (i = 0; i < 5; i++) {
        if (carros[i].km > 100000) {
            printf("Carro %d: \n", i + 1);
            printf("Marca %s: \n", carros[i].marca);
            printf("Ano %d: \n", carros[i].ano);
            printf("Quilometragem: %.2f km\n", carros[i].km);
            encontrou = 1;
        }
    }
    
    if 
	(encontrou) {
        printf("Nenhum carro com mais de 100.000 km \n");
    }

    return 0;
}