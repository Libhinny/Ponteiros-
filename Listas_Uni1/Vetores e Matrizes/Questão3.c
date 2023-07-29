#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int n; // declaração da variável 'n'
    printf("Informe um número inteiro positivo: "); // ordem da matriz definada pelo user
    scanf("%d", &n); // armazena o valor na variável 'n'
    
    int linhas = n, colunas = n, i, j;
    
    int **matriz = (int **) malloc (linhas*sizeof(int*)); //alocação dinamica de cada linha
    for (i = 0; i< linhas; i++){
        matriz[i] = (int *)malloc(colunas*sizeof(int));
    }
    
    srand(time(NULL)); // responsavel por alimentar a rand com valores aleatórios 
   
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

    // libera a memória alocada para cada linha da matriz
    for (i = 0; i < linhas; i++){
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}
