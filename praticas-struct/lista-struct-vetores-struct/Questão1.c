#include <stdio.h>
#include <stdlib.h>

typedef struct dados{   // Struct e Ponteiros
    char nome[20];
    float salario;
    int identificador;
    char cargo;
}Dados;

Dados * cadastro_funcionário (void); 
void imprime(Dados * dados);

int main (void){
    
    Dados * dados = cadastro_funcionário;
    imprime(dados);
    
    free(dados);
    return 0;
}

Dados * cadastro_funcionário (void) {
    Dados * dados = (Dados *) malloc (sizeof(Dados));
    if (dados == NULL){
        printf("Sem memória");
        exit(1);
    }
    printf("Digite o nome: \n");
    scanf(" %[^\n]", dados->nome);
    printf("Informe o salário: \n");
    scanf("%f", &dados->salario);
    printf("Informe a numeração do identificador: \n");
    scanf("%d", &dados->identificador);
    printf("Informe o cargo: \n");
    scanf(" %[^\n]", dados->cargo);

    return dados;

}

void imprime(Dados * dados){
    printf("Dados: \n Nome: %s \n Salário: %.2f \n Identificador: %d Cargo: %s \n", dados->nome, dados->salario, dados->identificador, dados->cargo);
    return;
}
