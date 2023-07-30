//Programa que manipula struct aluno
#include <stdio.h>

struct aluno { // struct que tem os campos dos dados do aluno
    char nome[20];
    int idade;
    int matricula;
};

int main (void){
    struct aluno var_aluno; // declara a variavel var_aluno do tipo struct aluno

    // pega os dados do aluno e os armazena
    printf("Digite o nome: ");
    scanf("%[^\n]", var_aluno.nome );

    printf("Digite a idade: ");
    scanf("%d", &var_aluno.idade );

    printf("Digite a matricula: ");
    scanf("%d", &var_aluno.matricula );

    // imprime os dados informados
    printf("Os dados informados:\n Nome: %s \t Idade: %d \t Matricula: %d ", var_aluno.nome, var_aluno.idade, var_aluno.matricula);

    return 0;
}
