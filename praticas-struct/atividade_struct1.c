#include <stdio.h>
#include <stdlib.h>

typedef struct dados{   // struct dados para o armazenamento do nome, salario, id e cargo do usuário
    char nome[30];
    float salario;
    int identificador;
    char cargo;
}Dados;

Dados * cadastro_funcionario (void); 

int main (void){
    Dados * funcionario = cadastro_funcionario();

    // imprime os dados do funcionario cadastrado
    printf("Dados do funcionário cadastrado: \n");
    printf("Nome: %s\n", funcionario->nome);
    printf("Salário: %2.f\n", funcionario->salario);
    printf("Identificador: %d\n", funcionario->identificador);
    printf("Cargo: %c\n", funcionario->cargo);

    free(funcionario); // libera a memoria alocada
    
    return 0;
}

// função que realiza o cadastro dos funcionarios 
Dados * cadastro_funcionario (void) {
    Dados * dados = (Dados *) malloc (sizeof(Dados)); // alocação dinamica da memoria
    if (dados == NULL){ // verificação se a alocação ocorreu corretamente
        printf("Sem memória");
        exit(1);
    }
    // pega as info do usuário e as armazena
    prinft("Digite o nome: \n");
    scanf(" %[^\n]", dados->nome);
    printf("Informe o salário: \n");
    scanf("%f", &dados->salario)
    printf("Informe a numeração do identificador: \n");
    scanf("%d", &dados->identificador);
    prinft("Informe o cargo: \n");
    scanf(" %[^\n]", dados->cargo);

    return dados;

}
