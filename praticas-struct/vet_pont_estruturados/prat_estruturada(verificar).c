#include <stdio.h>
#include <stdlib.h>

#define MAX_TURMAS 2
#define MAX_VAGAS 50

typedef struct aluno {
    int mat;
    char nome[81];
    float nota[3];
    float media;
}Aluno;

typedef struct turma{
    char id; // caractere que identifica a turma, por exemplo, A ou B
    int vagas; // número de vagas disponiveis para fechar a turma
    Aluno * alunos[MAX_TURMAS];
}Turma;

Turma * turmas[MAX_VAGAS];

int main (void){
    printf("Bem-vindo ao Programa de Gerenciamento de Turmas!\n Este programa gerencia as turmas ofertadas, fornecendo as funcionalidades de matricula, lancamento de notas e listagem de alunos \n");
    
    
    return 0;
}

void inicializa (int n, Turma** tab){
    int i;
    for (i=0; i< n; i++){
        tab[i] = NULL;
    }

}

void turma* cria_turma (char id, int n, turma** tab, int i){
    if (i < 0 || i >= n){
        printf("Indice fora do limite do vetor ");
        exit(1);
    }
    if (tab[i] == NULL){
        tab[i] = (Turma*)malloc(MAX_TURMAS*sizeof(Turma));
    }
    printf("Selecione o id: ");
    scanf(" %[^/n]", tab[i]->id);
}
