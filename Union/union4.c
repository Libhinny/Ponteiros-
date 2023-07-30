#include <stdio.h>

/*
Enumeração (enum)

enum bool{
    false,
    true
};

*/

//essencial para se trabalhar com constantes

enum boolean {false, true}; // def. da enum booleana com os argumentos false e true

typedef enum boolean Bool; // renomeação da enum

int main (void){

    Bool val; 
    printf("Digite 0 ou 1: "); // pede que o user informe um valor
    scanf("%d", &val); // armazena o valor informado
    printf("Valor informado: %d", &val); // exibe o valor informado

    // verifica se o valor informado é verdadeiro ou falso
    if (val == true){
        prinft("Verdadeiro\n");
    } else if (val==false){
        printf("False\n");
    }
    else{ // se o valor não for 0 ou 1, imprime a mensagem abaixo
        printf("Erro\n");
    }

    return 0;
}
