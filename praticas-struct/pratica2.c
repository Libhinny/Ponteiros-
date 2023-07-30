//Programa que recebe dados de uma pessoa 
#include <stdlib.h>

typedef struct pessoa { // struct que tem os campos de dados de uma pessoa
    char nome[20];
    int idade;
    int rg;
    float altura;
}Pessoa; // renomea com o comando typedef

int main (void){
    Pessoa var_pessoa; // declaração da variavel var_pessoa do tipo pessoa

    // pega os dados informados e os armazena 
    printf("Informe o nome: ");
    scanf(" %[^\n]", var_pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &var_pessoa.idade );

    printf("Digite o RG: ");
    scanf("%d", &var_pessoa.rg );

    printf("Digite a altura: ");
    scanf("%f", &var_pessoa.altura );

    // imprime os dados informados na tela
    printf("Os dados informados:\n Nome: %s \t Idade: %d \t RG: %d \t Altura: %2.f ", var_pessoa.nome, var_pessoa.idade, var_pessoa.rg, var_pessoa.altura);

    return 0; 
}
