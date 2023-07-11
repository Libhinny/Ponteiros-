//Programa que recebe dados de uma conta bancaria
#include <stdlib.h>

typedef struct Conta {
    char nome[20];
    int agencia;
    int numConta;
    char senha;
    float saldo;
}Conta;

int main (void){
    Conta var_conta[5];

    int indice;
    for (indice=0; indice<5; indice++){

    printf("Informe o nome: ");
    scanf(" %[^\n]", var_conta[indice].nome);

    printf("Digite a agencia: ");
    scanf("%d", &var_conta[indice].agencia );

    printf("Digite o número da conta: ");
    scanf("%d", &var_conta[indice].numConta );

    printf("Digite a senha: ");
    scanf("%f", &var_conta[indice].senha );

    printf("Digite  saldo: ");
    scanf("%f", &var_conta[indice].saldo );
    }

    printf("Os dados informados:\n Nome: %s \t Agencia: %d \t Número da conta: %d \t Senha: %s \t Saldo: %2.f", var_conta.nome, var_conta.agencia, var_conta.numConta, var_conta.senha, var_conta.saldo);

    return 0; 
}
