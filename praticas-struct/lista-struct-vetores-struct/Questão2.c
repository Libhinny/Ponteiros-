#include <stdio.h>
#include <stdlib.h>

typedef struct dados{   // struct com os campos de dados de uma pessoa
    char nome[20];
    int RG;
    int idade; 
}Dados;

// funções
Dados * dados_pessoais (void);
void imprime (Dados * dados);
void idade_atualizar (Dados * dados, int idade_atualizada);

int main (void){
    Dados * dados = dados_pessoais; // o ponteiro dados é declarado e vai receber os dados pessoais do user
    imprime(dados); // chama a função e os imprime

    int idade_atualizada;
    printf("Informe a sua idade atualizada: \n"); // pede atualização da idade
    scanf("%d", &idade_atualizada);
    idade_atualizar(dados, idade_atualizada); // chama a função e o atualiza

    free(dados); // libera a memória alocada dinamicamente
    return 0;
}

Dados * dados_pessoais (void){ // função que vai receber os dados fornecidos pelo user
    Dados * dados = (Dados *)malloc (sizeof(Dados)); // faz a alocação de memória 
    if (dados == NULL){ // verifica se a alocação foi feita com sucesso 
        printf("Sem memória!\n");
        exit(1);
    }
    
    // pega os dados do user e os armazena
    printf("Digite seu nome: \n");
    scanf(" %[^\n]", dados->nome);
    printf("Digite seu RG: \n");
    scanf("%d", &dados->RG);
    printf("Informe sua idade: \n");
    scanf("%d", &dados->idade);
    
    return dados;
}

void imprime (Dados * dados){ // função que imprime os dados 
    printf("O dados pessoais informados são: \n Nome: %s \n RG: %d \n Idade: %d \n", dados->nome, dados->RG, dados->idade);
    return;
}

void idade_atualizar (Dados * dados, int idade_atualizada){ // função que atualiza a idade da pessoa
    dados->idade = idade_atualizada;
    printf("Idade atualizada!\n");
}
