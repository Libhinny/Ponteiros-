#include <stdio.h>
#include <stdlib.h>

// Pragrama que cadastra funcionarios 

// Passo 1 - Definir a struct que representa o funcionario

typedef struct funcionario{
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
}Funcionario;

Funcionario * cadastraFuncionario (void){
/* Função que cadastra funcionário */

    int quantidade_funcionarios;
        printf("Informe a quantidade de funcionários a ser cadastrado: \n");
        scanf("%d", &quantidade_funcionarios);

// Declaração de vetor do tipo funcionario

    Funcionario * vetor = (Funcionario *)malloc(quantidade_funcionarios*sizeof(Funcionario)); // alocação dinamica de memoria
        if (vetor == NULL){ // verifica se a alocação ocorreu corretamente
            prinft("Sem memória!\n");
            exit(1);
    }

// Preenche o vetor de funcionario
    int indice;
    for (indice=0; indice< qnt_funcionarios; indice++){
        printf("Digite o nome: \n");
        scanf(" %[^\n]", vetor_funcionario[indice].nome);
        printf("Digite a idade: \n");
        scanf("%d", &vetor_funcionario[indice].idade);
        printf("Digite o salário: \n");
        scanf("%f", &vetor_funcionario[indice].salario);
        printf("Digite o cargo: \n");
        scanf(" %[^\n]", vetor_funcionario[indice].cargo);
    }

    return vetor;
}

int main (void){
    
    int qntFun; // declaração da variavel que armazenará a qtd de funcionarios 
    printf("Informe a quantidade de funcionários a ser cadastrado: \n");
    scanf("%d", &qntFun);

    // chama as funções para realizar o cadastro e a impressão dos dados
    funcionario * vetor_funcionario = cadastraFuncionario(); 
    imprime(vetor_funcionario, qntFun);

    free(vetor_funcionario); // libera a memoria alocada 

    return 0;
}
 // Passo 3 - Função que imprime os dados dos funcionarios
void imprime(Funcionario * vetor_funcionario, int qnt_funcionarios){
    int indice; 
    prinft("Dados dos funcionários: \n")
    for (indice = 0; indice < qnt_funcionarios; indice++){
        printf("Os dados são:\n Nome: %s\n Idade: %d \n Salário: %.2f \n Cargo: %s\n", vetor_funcionario[indice].nome, vetor_funcionario[indice].idade, vetor_funcionario[indice].salario, vetor_funcionario[indice].cargo);
        
    }

}
