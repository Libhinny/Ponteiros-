#include <stdio.h>
#include <stdlib.h>

int main (void){
    int tamanho;
    printf ("Digite o tamanho do vetor\n");
    scanf ("%d", &tamanho);

    int * vetor = (int*) malloc(tamanho*sizeof(int));
    if (vetor == NULL) {
    printf ("Erro de alocação \n");
    exit (1);
    }
    else {
        printf (" Alocação realizada com sucesso! \n");
    }
    // Recebe elementos inseridos pelo user
    int contador;
    printf ("Digite os valores do vetor: \n");
    for (contador=0 ; contador<tamanho; contador++);{
        scanf ("%d", &vetor[contador]);
    }

    for (contador = tamanho - 1; contador >= 0; contador--){
    printf("%d", &vetor[contador]);
    }
    free (vetor);
    return 0;
}
