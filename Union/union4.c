#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*
Enumeração (enum)

enum bool{
    false,
    true
};

*/

//essencial para se trabalhar com constantes

enum boolean {false, true};

typedef enum boolean Bool;

int main (void){

    Bool val;
    printf("Digite 0 ou 1: ");
    scanf("%d", &val);
    printf("Valor informado: %d", &val);

    if (val == true){
        prinft("Verdadeiro");
    } else if (val==false){
        printf("False");
    }
    else{
        printf("Erro");
    }

    return 0;
}
