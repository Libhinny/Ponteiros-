#include <stdio.h>
#include <stdlib.h>

/* O código abaixo faz a alocação de uma matriz e a sua transposta, com o número de linhas e colunas determinado pelo user.
Faz a impressão de ambas as matrizes e libera a memória com a função free */

int main (void){
int linhas, colunas;
printf ("Infome o número de linhas da matriz: \n");
scanf ("%d", &linhas);
printf ("Infome o número de colunas da matriz: \n");
scanf ("%d", &colunas);

int ** matriz = (int**) malloc(linhas*sizeof(int*)); // alocação da matriz, que é um ponteiro de ponteiros
if (matriz==NULL){
    exit(1);
}

int contador; // alocação da matriz
for (contador = 0; contador < linhas; contador++){
    matriz[contador]= (int*) malloc(colunas*sizeof(int)); // nesta parte, cada valor do contador, um vetor é alocado dinamicamente para representar a linha da matriz
}

int linha, coluna;
for (linha = 0; linha < linhas; linha++){
    for(coluna=0; coluna<colunas; coluna++){
        scanf("%d", &matriz[linha][coluna]);
    }
}

int ** matrizT = (int**) malloc(linhas*sizeof(int*)); // alocação da matriz transposta, também um ponteiro de ponteiros 
if (matrizT==NULL){
    exit(1);
}

int contador; // alocação da matriz
for (contador = 0; contador < linhas; contador++){
    matrizT[contador]= (int*) malloc(colunas*sizeof(int));
}

for(linha=0; linha<linhas; linha++){
    for (coluna=0; coluna<colunas; coluna++){
        matrizT[linha][coluna] = matriz [coluna][linha];
    }
}

// imprimir a matriz
for(linha=0; linha<linhas; linha++){
    for (coluna=0; coluna<colunas; coluna++){
        printf("%d", matriz[linha][coluna]);
    }
    printf("\n");
}

for (linha=0; linha<linhas; linha++){
    free (matriz[linha]);
    free(matrizT[linha]);
}
free (matriz);
free(matrizT);

return 0;
}
