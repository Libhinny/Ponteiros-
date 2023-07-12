#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{   // Struct e Ponteiros
    char nome[30];
    float nota;
}Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
    Disciplina * disciplina;
} Aluno;

Aluno * cadastra_aluno(void);

int main (void){

    Aluno * aluno = cadastra_aluno ();

    printf("Dados: \n Nome: %s \n Idade: %d \n Disciplina 1: %s Disciplina 2: %s \n Nota 1: %2.f \n Nota 2: %2.f", aluno->nome, aluno->idade, aluno->disciplina[0].nome, aluno->disciplina[1].nome, aluno->disciplina[0].nota, aluno->disciplina[1].nota);

    free(aluno->disciplina);
    free(aluno);
    return 0;
}

Aluno * cadastra_aluno (void){
     Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
    if (aluno == NULL){
        printf("Sem memória!\n");
        exit(1);
    }
    
    aluno->disciplina = (Disciplina*) malloc (2*sizeof(Disciplina));
    
    printf("Digite o nome: \n");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: \n ");
    scanf("%d", &aluno->idade );

    printf("Digite o nome da disciplina 1: \n");
    scanf(" %[^\n]", aluno->disciplina[0].nome);
    printf("Digite o nome da disciplina 2: \n");
    scanf(" %[^\n]", aluno->disciplina[1].nome);

    printf("Digite a nota da 1 disciplina: \n");
    scanf("%f", &aluno->disciplina[0].nota);
    printf("Digite a nota da 2 disciplina: \n");
    scanf("%f", &aluno->disciplina[1].nota);

    return aluno;
}
