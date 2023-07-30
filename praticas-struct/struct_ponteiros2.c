#include <stdio.h>
#include <stdlib.h>

// Struct e Ponteiros

typedef struct disciplina{   // def a struct com os campos de nome da disciplina e a nota
    char nome[30];
    float nota;
}Disciplina; // renomea com o comando typedef

typedef struct aluno { // def a struct com os campos de nome e idade do aluno
    char nome[20];
    int idade;
} Aluno; // renomea com o comando typedef

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno)); // faz a alocação dinamica 
    if (aluno == NULL){ // verifica se houve erros na alocação
        printf("Sem memória!\n");
        exit(1);
    }

    // pega os dados informados e os armazena 
    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: ");
    scanf("%d", &aluno->idade );

    free(aluno);
    return 0;
}
