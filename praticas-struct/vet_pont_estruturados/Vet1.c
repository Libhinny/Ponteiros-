#include <stdio.h>
#include <stdlib.h>
 

typedef struct aluno{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
}Aluno;


void inicializa (int n, Aluno** tab){
    int i;
    for (i=0; i < n; i++){
        tab[i] = NULL;
    }
}

void preenche (int n, Aluno** tab, int i){
    if (i < 0 || i >= n){
        printf ("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] == NULL){
        tab[i] = (Aluno*)malloc(sizeof(Aluno));
    }

    printf("Entre com a matricula: \n");
    scanf("%d", &tab[i]->mat);
    printf("Entre com o nome: \n");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com o endereço: ");
    scanf("%120[^\n]", tab[i]->end);
    printf("Entre com o telefone: \n");
    scanf(" %20[^\n]", tab[i]->tel);
}

void retira (int n, Aluno** tab, int i){
    if (i < 0 || i>= n){
        printf("Indice fora do limite do vetor. \n");
        exit(1); //aborta programa
    }
    if (tab[i] != NULL){
        free(tab[i]);
        tab[i] = NULL; // indica que na posição não existe mais dado
    }
}

void imprime (int n, Aluno** tab, int i){
    if ( i < 0 || i >= n ){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] != NULL){
        printf("Matricula: %d\n", tab[i]->mat);
        printf("Nome: $s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}

void imprime_tudo (int n, Aluno** tab){
    int i;
    for (i = 0; i < n; i++){
        imprime (n, tab, i);
    }
}

int main (void){
    Aluno* tab[10];
    inicializa(20, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;
}
