//Programa que recebe dados de uma pessoa, vetor de pessoas
#include <stdlib.h>

typedef struct pessoa { // struct que contém os campos de nome, idade, rg e altura de determinada pessoa
    char nome[20];
    int idade;
    int rg;
    float altura;
}Pessoa; // renomea com o comando typedef

int main (void){
    Pessoa var_pessoa[3]; // declaração do vetor com tamanho 3 do tipo pessoa

    int indice; // laço que vai percorrer todo o vetor e pegará os dados informados
    for (indice=0; indice<3; indice++){

    printf("Informe o nome: ");
    scanf(" %[^\n]", var_pessoa[indice].nome);

    printf("Digite a idade: ");
    scanf("%d", &var_pessoa[indice].idade );

    printf("Digite o RG: ");
    scanf("%d", &var_pessoa[indice].rg );

    printf("Digite a altura: ");
    scanf("%f", &var_pessoa[indice].altura );
    }

    // imprime os dados informados percorrendo o laço
    printf("Os dados informados:\n);
        for (indice = 0; indice < 3; indice++) {
            printf("Nome: %s \t Idade: %d \t RG: %d \t Altura: %f\n", var_pessoa[indice].nome, var_pessoa[indice].idade, var_pessoa[rg], var_pessoa[indice].altura);
}

    return 0; 
}
