#include <stdio.h>
#include <stdlib>

// Programa que faz o cadastro bancário

typedef struct dados{
    char nome[20];
    int idade;
    int senha;
    float saldo;
}Dados;

void Dados * cadastro_bancario (void){

    int qnt_cadastro;
    printf("Informe a quantidade de cadastro que serão feitos: \n");
    scanf("%d", &qnt_bancario);

    Dados * cadastro_bancario = (Dados *)malloc(qnt_bancario*sizeof(Dados));
    if (Dados == NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    int indice;
    for (indice=0; indice<qnt_bancario; indice++){
        printf("Digite o nome: \n");
        scanf(" %[^/n]", cadastro_bancario[indice].nome);
        printf("Digite a idade: \n");
        scanf("%d", &cadastro_bancario[indice].idade);
        printf("Digite a senha: \n");
        scanf("%d", &cadastro_bancario[indice].senha);
        printf("Digite o nome: \n");
        scanf("%f", cadastro_bancario[indice].saldo);
    }

    return cadastro_bancario;
}

void imprime(Dados * cadastro_bancario, int qnt_cadastros){
    int indice; 
    prinft("Dados dos cadastros: \n");
    for (indice=0; indice< qnt_cadastros; indice++){
        printf("Os dados são:\n Nome: %s\n Idade: %d \n Senha: %d \n Saldo: %.2f", cadastro_bancario[indice].nome, cadastro_bancario[indice].idade, cadastro_bancario[indice].senha, cadastro_bancario[indice].saldo);   
    }

}

int main (void){
    int qnt_cadastramento;
    printf("Informe a quantidade de cadastramentos: \n");
    scanf("%d", &qnt_cadastramento);

    Dados * cadastro_bancario = ;
    imprime(cadastro_bancario, int qnt_cadastramento);

    free(cadastro_bancario);
    return 0; 
}
