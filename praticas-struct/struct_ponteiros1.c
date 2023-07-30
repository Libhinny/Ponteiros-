//Programa que manipula struct aluno
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno { // struct com os campos de nome e idade
    char nome[20];
    int idade;
} Aluno; // renomea com o comando typedef 

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno)); // alocação dinamica 

    // pega as informações do aluno e armazena 
    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: ");
    scanf("%d", &aluno->idade );

    return 0;
}
