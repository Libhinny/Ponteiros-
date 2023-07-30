#include <stdio.h>
#include <stdlib.h>

// Struct e Ponteiros

/* continuação do arq struct_ponteiros2.c, onde dá continuidade ao pegar os dados do nome e
   nota referentes à disciplina, e os armazena. Após isso, imprime os dados do aluno e mostra
   a disciplina e sua respectiva nota. Por fim, libera a memória com o comando free. */

typedef struct disciplina{   
    char nome[30];
    float nota;
}Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
    Disciplina disciplina;
} Aluno;

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
    if (aluno == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    printf("Digite o nome: \n");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: \n ");
    scanf("%d", &aluno->idade );

    printf("Digite o nome da disciplina: \n");
    scanf(" %[^\n]", aluno->disciplina.nome);

    printf("Digite a nota: \n");
    scanf("%f", &aluno->disciplina.nota);

    printf("Dados: \n Nome: %s \n Idade: %d \n Disciplina: %s \n Nota: %2.f", aluno->nome, aluno->idade, aluno->disciplina.nome, aluno->disciplina.nota);

    free(aluno);
    return 0;
}
