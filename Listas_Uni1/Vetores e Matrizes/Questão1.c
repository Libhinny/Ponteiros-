#include <stdio.h>
#include <stdlib.h>

int main (void){
    int tamanho; // indica o tamanho do vetor 
    printf ("Digite o tamanho do vetor\n"); // pede que o user informe o tamanho desejado
    scanf ("%d", &tamanho); // e armazene o valor na variável 'tamanho'

    int * vetor = (int*) malloc(tamanho*sizeof(int)); // faz a alocação de memória
    if (vetor == NULL) {
    printf ("Erro de alocação \n"); // se houver erros na alocação, a ação é abortada
    exit (1);
    }
    else {
        printf (" Alocação realizada com sucesso! \n");
    }
    // Recebe elementos inseridos pelo user
    int contador;
    printf ("Digite os valores do vetor: \n"); // pede que o user insira os valores para preencher o vetor
    for (contador=0 ; contador<tamanho; contador++){
        scanf ("%d", &vetor[contador]);
    }

    for (contador = tamanho - 1; contador >= 0; contador--){ // imprime os valores na ordem inversa
    printf("%d", vetor[contador]);
    }
    free (vetor); // faz a liberação da memória 
    return 0;
}
