#include <stdio.h>
#include <stdlib.h>
 

typedef struct aluno{ /* declaração da função struct em que obtém as variáveis nome, endereço e telefone de determinado aluno */
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
}Aluno;

// as funções abaixo realizam operações com o vetor de ponteiros para alunos
void inicializa (int n, Aluno** tab){ /* inicializa o vetor como se não houvesse alunos, definindo todos como null */
    int i;
    for (i=0; i < n; i++){
        tab[i] = NULL;
    }
}

void preenche (int n, Aluno** tab, int i){ // preenche as info de um aluno em cada posição do vetor
    if (i < 0 || i >= n){
        printf ("Indice fora do limite do vetor.\n");
        exit(1); //aborta o programa
    }
    if (tab[i] == NULL){
        tab[i] = (Aluno*)malloc(sizeof(Aluno)); // realização da alocação
    }

    printf("Entre com a matricula: \n"); /* nessa parte, o programa pegará as informações, de acordo com a quantidade de vezes em que o laço se repetirá */ 
    scanf("%d", &tab[i]->mat);
    printf("Entre com o nome: \n");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com o endereço: ");
    scanf("%120[^\n]", tab[i]->end);
    printf("Entre com o telefone: \n");
    scanf(" %20[^\n]", tab[i]->tel);
}

void retira (int n, Aluno** tab, int i){ // ela remove o aluno de uma determinada posição do vetor, liberando a memória
    if (i < 0 || i>= n){
        printf("Indice fora do limite do vetor. \n");
        exit(1); //aborta programa
    }
    if (tab[i] != NULL){
        free(tab[i]);
        tab[i] = NULL; // indica que na posição não existe mais dado
    }
}

void imprime (int n, Aluno** tab, int i){ // exibe as info do aluno que está em uma posição do vetor
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

void imprime_tudo (int n, Aluno** tab){ // percorre o vetor e imprime as info de todos os alunos armazenados 
    int i;
    for (i = 0; i < n; i++){
        imprime (n, tab, i);
    }
}

int main (void){ 
    Aluno* tab[10]; // declaração do vetor de ponteiros para Aluno com tamanho 10
    inicializa(20, tab); // inicializa o vetor tab, def todas as posições como null
    preenche(10, tab, 0); // preenche as informações dos alunos nas posições 0,1, 2
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab); // imprime as info dos alunos armazenados no vetor tab
    retira(10, tab, 0); // faz a remoção dos alunos armazenados, que inicialmente foram colocados nas posições 0,1 e 2 do vetor
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;
}
