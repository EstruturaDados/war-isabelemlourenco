#include <stdio.h>
#include <string.h>

/*
    Struct Territorio
    Representa um território com:
    - nome: nome do território
    - cor: cor do exército
    - tropas: quantidade de tropas no território
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome);  // leitura do nome

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);   // leitura da cor

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas); // leitura das tropas

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territorios cadastrados ===\n");

    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}