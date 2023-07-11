//Programa que manipula struct aluno
#include <stdio.h>

struct aluno {
    char nome[20];
    int idade;
    int matricula;
};

int main (void){
    struct aluno var_aluno;

    printf("Digite o nome: ");
    scanf("%[^\n]", var_aluno.nome );

    printf("Digite a idade: ");
    scanf("%d", &var_aluno.idade );

    printf("Digite a matricula: ");
    scanf("%d", &var_aluno.matricula );

    printf("Os dados informados:\n Nome: %s \t Idade: %d \t Matricula: %d ", var_aluno.nome, var_aluno.idade, var_aluno.matricula);

    return 0;
}
