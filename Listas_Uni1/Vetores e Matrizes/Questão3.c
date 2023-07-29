#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int n;
    printf("Informe um número inteiro positivo: "); //ordem da matriz definada pelo user
    scanf("%d", &n);
    
    int linhas = n, colunas = n, i, j;
    
    int **matriz = (int **) malloc (linhas*sizeof(int*)); //alocação de cada linha
    for (i = 0; i< linhas; i++){
        matriz[i] = (int *)malloc(colunas*sizeof(int));
    }
    
    srand(time(NULL)); //responsavel por alimentar a rand
   
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
        matriz[i][j]= rand() % 100;
        }
    }

for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
        printf("%d", matriz[i][j]);
        printf("\n");
    }

    free(matriz);
    return 0;
}
