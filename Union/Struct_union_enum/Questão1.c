#include <stdio.h>

enum genero {feminino, masculino}; // enum contendo os generos

typedef enum genero Genero; // função que permite a renomeação

typedef struct pessoa { // definição da estrutura struct com os parametros de nome, idade e genero
    char nome[20];
    int idade;
    Genero genero;
}Pessoa;

int main (void){

    Pessoa p; // variável que armazena os dados do usuário
    int f_m;

    // pega os dados do usuário e os armazena
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", p.nome);
    printf("Digite sua idade: \n");
    scanf("%d", &p.idade);

    printf("Informe seu gênero (0 para feminino e 1 para masculino): \n");
    scanf("%d", &f_m);
   
    printf("Valor informado: %d\n", f_m);

    if (f_m == feminino){ // faz a verificação para determinar o genero informado pelo user
        printf("Feminino\n");
    } else if (f_m == masculino){
        printf("Masculino\n");
    }
    else {
        printf("Erro\n");
    }

    return 0;
}

