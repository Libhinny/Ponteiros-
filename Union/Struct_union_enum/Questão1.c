#include <stdio.h>

enum genero {feminino, masculino};

typedef enum genero Genero;

typedef struct pessoa { // definição da estrutura struct com os parametros de nome, idade e genero
    char nome[20];
    int idade;
    Genero genero[20];
}Pessoa;

int main (void){

    Pessoa p;
    Genero f_m;

    printf("Digite seu nome: \n");
    scanf(" %[^\n]", p.nome);
    printf("Digite sua idade: \n");
    scanf("%d", &p.idade);

    printf("Informe seu gênero (0 para feminino e 1 para masculino): \n");
    scanf("%d", &f_m);
   
    printf("Valor informado: %d", &f_m);

    if (f_m == feminino){
        printf("Feminino");
    } else if (f_m == masculino){
        printf("Masculino");
    }
    else {
        printf("Erro");
    }

    return 0;
}

