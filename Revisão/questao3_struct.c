#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FRUTAS 100

// Definição da struct Fruta
struct Fruta {
    char nome[50];
    char cor[20];
    char sabor[30];
    int quantidade;
};

int main() {
    // Vetor de structs para armazenar as frutas
    struct Fruta frutas[MAX_FRUTAS];

    int numFrutas = 0;

    while (1) {
        // Solicitar ao usuário que insira as informações da fruta
        struct Fruta novaFruta;
        printf("\nCadastro de Fruta:\n");
        printf("Nome: ");
        scanf(" %[^\n]", novaFruta.nome);
        printf("Cor: ");
        scanf(" %[^\n]", novaFruta.cor);
        printf("Sabor: ");
        scanf(" %[^\n]", novaFruta.sabor);
        printf("Quantidade: ");
        scanf("%d", &novaFruta.quantidade);

        // Adicionar a nova fruta ao vetor de structs
        frutas[numFrutas] = novaFruta;
        numFrutas++;

        // Verificar se o limite máximo de frutas foi atingido
        if (numFrutas == MAX_FRUTAS) {
            printf("Limite máximo de frutas atingido.\n");
            break;
        }

        // Solicitar ao usuário se deseja cadastrar mais uma fruta
        char resposta;
        printf("Deseja cadastrar mais uma fruta? (S/N): ");
        scanf(" %c", &resposta);

        if (resposta != 'S' && resposta != 's') {
            break;
        }
    }

    // Imprimir todas as informações das frutas cadastradas até o momento
    printf("\n--- Informações das Frutas Cadastradas ---\n");
    for (int i = 0; i < numFrutas; i++) {
        printf("Fruta %d:\n", i + 1);
        printf("Nome: %s\n", frutas[i].nome);
        printf("Cor: %s\n", frutas[i].cor);
        printf("Sabor: %s\n", frutas[i].sabor);
        printf("Quantidade: %d\n", frutas[i].quantidade);
        printf("-----------------------------\n");
    }

    // Solicitar ao usuário que insira o nome de uma fruta para buscar
    char nomeBusca[50];
    printf("\nDigite o nome de uma fruta para buscar: ");
    scanf(" %[^\n]", nomeBusca);

    // Buscar todas as frutas com o nome informado e imprimir suas informações
    printf("\n--- Frutas com o Nome '%s' ---\n", nomeBusca);
    int encontrouFrutas = 0;
    for (int i = 0; i < numFrutas; i++) {
        if (strcmp(frutas[i].nome, nomeBusca) == 0) {
            printf("Fruta %d:\n", i + 1);
            printf("Nome: %s\n", frutas[i].nome);
            printf("Cor: %s\n", frutas[i].cor);
            printf("Sabor: %s\n", frutas[i].sabor);
            printf("Quantidade: %d\n", frutas[i].quantidade);
            printf("-----------------------------\n");
            encontrouFrutas = 1;
        }
    }

    if (!encontrouFrutas) {
        printf("Nenhuma fruta com o nome '%s' foi encontrada.\n", nomeBusca);
    }

    return 0;
}

