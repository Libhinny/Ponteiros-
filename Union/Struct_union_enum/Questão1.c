#include <stdio.h>

typedef struct pessoa {
    char nome[20];
    int idade;
    Genero genero[20];
}Pessoa;

enum genero {feminino, masculino};

typedef enum genero Genero;

int main (void){

    Pessoa p;
    Genero f_m;

    printf("Digite seu nome: \n");
    scanf(" %[^\n]", p.nome);
    printf("Digite sua idade: \n");
    scanf("%d", &p.idade);
    printf("Digite seu gênero: \n");
    scanf(" %[^\n]", p.genero);

    printf("Digite 0 ou 1: ");
    scanf("%d", &f_m);
    printf("Valor informado: %d", &f_m);

    if (f_m == feminino){
        printf("Feminino");
    } else if (f_m == masculino){
        prinft("Masculino");
    }
    else {
        printf("Erro");
    }

    return 0;
}

