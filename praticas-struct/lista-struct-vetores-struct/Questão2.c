#include <stdio.h>
#include <stdlib.h>

typedef struct dados{   // Struct e Ponteiros
    char nome[20];
    int RG;
    int idade; 
}Dados;

Dados * dados_pessoais (void);
void imprime (Dados * dados);
void idade_atualizar (Dados * dados, int idade_atualizada);

int main (void){
    Dados * dados = dados_pessoais;
    imprime(dados);

    int idade_atualizada;
    printf("Informe a sua idade atualizada: \n");
    scanf("%d", &idade_atualizada);
    idade_atualizar(dados, idade_atualizada);

    free(dados);
    return 0;
}

Dados * dados_pessoais (void){
    Dados * dados = (Dados *)malloc (sizeof(Dados));
    if (dados == NULL){
        printf("Sem memória!\n");
        exit(1);
    }
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", dados->nome);
    printf("Digite seu RG: \n");
    scanf("%d", &dados->RG);
    printf("Informe sua idade: \n");
    scanf("%d", &dados->idade);
    
    return dados;
}

void imprime (Dados * dados){
    printf("O dados pessoais informados são: \n Nome: %s \n RG: %d \n Idade: %d \n", dados->nome, dados->RG, dados->idade);
    return;
}

void idade_atualizar (Dados * dados, int idade_atualizada){
    dados->idade = idade_atualizada;
    printf("Idade atualizada!\n");
}
