#include <stdio.h>
#include <stdlib.h>

int main (void){
    int tamanho; // declaração da variável 'tamanho' que armazenará o tamanho do vetor 
    printf ("Digite o tamanho do vetor\n");
    scanf ("%d", &tamanho);

    int * vetor = (int*) malloc(tamanho*sizeof(int)); // realização da alocação dinâmica na memória 
    if (vetor == NULL) {
    printf ("Erro de alocação \n"); // caso haja erros, a alocação será abortada
    exit (1);
    }
    else {
        printf (" Alocação realizada com sucesso! \n");
    }
    
    // Recebe elementos inseridos pelo user
    int contador;
    printf ("Digite os valores do vetor: \n");
    for (contador=0 ; contador<tamanho; contador++){ // o user vai fornecer valores de acordo com o valor fornecido a variavel 'tamanho'
        scanf ("%d", vetor[contador]); // os valores serão armazenados nas posições do vetor 
    }

    for (contador = tamanho - 1; contador >= 0; contador--){ // aqui, os valores serão colocados na ordem inversa
    printf("%d", &vetor[contador]);
    }
    free (vetor); // liberação da memória
    return 0;
}
