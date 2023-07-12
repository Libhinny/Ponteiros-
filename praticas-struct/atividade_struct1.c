#include <stdio.h>
#include <stdlib.h>

typedef struct dados{   // Struct e Ponteiros
    char nome[30];
    float salario;
    int identificador;
    char cargo;
}Dados;

Dados * cadastro_funcionário (void); 

int main (void){
    return 0;
}

Dados * cadastro_funcionário (void) {
    Dados * dados = (Dados *) malloc (sizeof(Dados));
    if (Dados == NULL){
        printf("Sem memória");
        exit(1);
    }
    prinft("Digite o nome: \n");
    scanf(" %[^\n]", dados->nome);
    printf("Informe o salário: \n");
    scanf("%f", &dados->salario)
    printf("Informe a numeração do identificador: \n");
    scanf("%d", &dados->identificador);
    prinft("Informe o cargo: \n");
    scanf(" %[^\n]", dados->cargo)

}
