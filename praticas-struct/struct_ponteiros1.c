//Programa que manipula struct aluno
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[20];
    int idade;
} Aluno;

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));

    printf("Digite o nome: ");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: ");
    scanf("%d", &aluno->idade );

    return 0;
}
