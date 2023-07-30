#include <stdio.h>
#include <stdlib.h>

 // Struct e Ponteiros

typedef struct dados{   // def. struct com os campos de nome, salario, id e cargo
    char nome[20];
    float salario;
    int identificador;
    char cargo;
}Dados; // renomea a struct


// funções
Dados * cadastro_funcionário (void); 
void imprime(Dados * dados);
void atualizar_salario (Dados * dados, float novo_salario);

int main (void){
    
    Dados * dados = cadastro_funcionário(); // declaração do ponteiro e a função vai preencher os dados e os armazenar em 'dados'
    imprime(dados); // imprime os dados

    float novo_salario; 
    printf("Atualize o valor do salário: \n"); // pede a atualização do salario 
    scanf("%f", &novo_salario); 
    atualizar_salario(dados, novo_salario); // chama a função para que a atualização ocorra
    
    free(dados); // libera a memória
    return 0;
}

Dados * cadastro_funcionário (void) { // responsável por alocar dinamicamente a memória para a variável do tipo dados 
    Dados * dados = (Dados *) malloc (sizeof(Dados));
    if (dados == NULL){ // verifica se a alocação foi feita corretamente
        printf("Sem memória");
        exit(1);
    }

    // pega os dados fornecidos pelo user
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

void imprime(Dados * dados){ // serve para imprimir os dados do funcionário
    printf("Dados: \n Nome: %s \n Salário: %.2f \n Identificador: %d Cargo: %s \n", dados->nome, dados->salario, dados->identificador, dados->cargo);
    return;
}

void atualizar_salario (Dados * dados, float novo_salario){ // recebe um novo salário e o atualiza
    dados->salario = novo_salario;
    printf("Atualização do salário realizada!\n");
}
