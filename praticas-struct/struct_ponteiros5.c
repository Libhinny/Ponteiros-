#include <stdio.h>
#include <stdlib.h>

// struct e ponteiros 
/* segue o modelo do arq struct_ponteiros4.c, no entanto, neste é definido a quantidade de 
   de disciplinas a serem cadastradas. */

typedef struct disciplina{  
    char nome[30];
    float nota;
}Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
    Disciplina * disciplina;
} Aluno;

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno)); // faz a alocação dinamica 
    if (aluno == NULL){ // verifica se ocorreu corretamente
        printf("Sem memória!\n");
        exit(1);
    }

    aluno->disciplina = (Disciplina*) malloc (2*sizeof(Disciplina)); // alocação dinamica da variavel disciplina
    if (aluno->disciplina == NULL){ // verifica se a alocação ocorreu corretamente
        printf("Sem memória!\n");
        exit(1);
    }


    // pega os dados fornecidos pelo aluno e sobre a disciplina, armazenando-os em suas respectivas variaveis
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


    // imprime os dados na tela 
    printf("Dados: \n Nome: %s \n Idade: %d \n Disciplina 1: %s Disciplina 2: %s \n Nota 1: %2.f \n Nota 2: %2.f", aluno->nome, aluno->idade, aluno->disciplina[0].nome, aluno->disciplina[1].nome, aluno->disciplina[0].nota, aluno->disciplina[1].nota);

    free(aluno->disciplina); // faz a liberação da memória com o comando free
    free(aluno);
    return 0;
}
