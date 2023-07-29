#include <stdio.h>
#include <stdlib.h>

int main (void){
int linhas, colunas; // declaração das variáveis que vão armazenar os valores das linhas e colunas da matriz 
printf ("Infome o número de linhas da matriz: \n");
scanf ("%d", &linhas);
printf ("Infome o número de colunas da matriz: \n");
scanf ("%d", &colunas);

int ** matriz = (int**) malloc(linhas * sizeof(int*)); // alocação de memória usando o ponteiro para ponteiros 
if (matriz == NULL){ // verificação se a alocação foi feita corretamente
    exit(1);
}

int contador; // alocação da matriz
for (contador = 0; contador < linhas; contador++){
    matriz[contador]= (int*)malloc(colunas*sizeof(int));
}

int linha, coluna;
printf("Digite os valores da matriz: \n");
for (linha = 0; linha < linhas; linha++){
    for(coluna = 0; coluna < colunas; coluna++){
        scanf("%d", &matriz[linha][coluna]);
    }
}

int ** matrizT = (int**) malloc(linhas*sizeof(int*)); // alocação dinamica da matriz transposta
if (matrizT == NULL){ // verificação da alocação
    exit(1);
}

for (contador = 0; contador<linhas; contador++){ // alocação da matriz
    matrizT[contador]= (int*) malloc(colunas*sizeof(int));
}

for(linha=0; linha<linhas; linha++){
    for (coluna=0; coluna<colunas; coluna++){
        matrizT[coluna][linha] = matriz[linha][coluna];
    }
}

printf("Matriz original: \n")// imprimir a matriz
for(linha = 0; linha < linhas; linha++){
    for (coluna = 0; coluna < colunas; coluna++){
        printf("%d", matriz[linha][coluna]);
    }
    printf("\n");
}

for (linha = 0; linha < linhas; linha++){
    free (matriz[linha]);
    free(matrizT[linha]);
}
free (matriz); // liberação da memória alocada para as matrizes
free(matrizT);

return 0;
}
