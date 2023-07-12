#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{   // Struct e Ponteiros
    char nome[30];
    float nota;
}Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
} Aluno;

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
    if (aluno == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: ");
    scanf("%d", &aluno->idade );

    free(aluno);
    return 0;
}
