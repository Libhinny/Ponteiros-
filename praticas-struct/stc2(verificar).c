#include <stdio.h>
#include <stdlib.h>

// Programa que faz o cadastro bancário

typedef struct dados{ // struct contendo os dados do user
    char nome[20];
    int idade;
    int senha;
    float saldo;
}Dados; // renomea com o comando typedef

Dados * cadastro_bancario (void){ // função que realiza o cadastro bancario do usuário 

    int qnt_cadastro;
    printf("Informe a quantidade de cadastro que serão feitos: \n"); // pede ao usuário a quantidade de pessoas a serem cadastradas
    scanf("%d", &qnt_bancario);

    Dados * cadastro_bancario = (Dados *)malloc(qnt_bancario*sizeof(Dados)); // faz a alocação dinamica 
    if (cadastro_bancario == NULL){ // verifica se a alocação ocorreu corretamente
        printf("Sem memória!\n");
        exit(1);
    }

    // laco que pegará as informações das pessoas de acordo com o tamanho fornecido 
    int indice;
    for (indice = 0; indice < qnt_bancario; indice++){
        printf("Digite o nome: \n");
        scanf(" %[^/n]", cadastro_bancario[indice].nome);
        printf("Digite a idade: \n");
        scanf("%d", &cadastro_bancario[indice].idade);
        printf("Digite a senha: \n");
        scanf("%d", &cadastro_bancario[indice].senha);
        printf("Digite o saldo: \n");
        scanf("%f", &cadastro_bancario[indice].saldo);
    }

    return cadastro_bancario;
}

// função que imprime os dados 
void imprime(Dados * cadastro_bancario, int qnt_cadastros){ 
    int indice; 
    prinft("Dados dos cadastros: \n");
    for (indice = 0; indice < qnt_cadastros; indice++){
        printf("Os dados são:\n Nome: %s\n Idade: %d \n Senha: %d \n Saldo: %.2f \n", cadastro_bancario[indice].nome, cadastro_bancario[indice].idade, cadastro_bancario[indice].senha, cadastro_bancario[indice].saldo);   
    }

}

int main (void){
    int qnt_cadastramento;
    printf("Informe a quantidade de cadastramentos: \n");
    scanf("%d", &qnt_cadastramento);

// chamado das funções para realizar o cadastro e a impressão dos dados 
    Dados * cadastro_bancario = cadastro_bancario();
    imprime(cadastro_bancario, int qnt_cadastramento);

    free(cadastro_bancario); // faz a liberação da memória
    return 0; 
}
