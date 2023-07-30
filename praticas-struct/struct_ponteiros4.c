#include <stdio.h>
#include <stdlib.h>

// Struct e Ponteiros

/* É definido as duas estruturas de diciplina e aluno, para pegar as informações dos alunos */
typedef struct disciplina{   
    char nome[30];
    float nota;
}Disciplina; // renomea com o comando typedef

typedef struct aluno {
    char nome[20];
    int idade;
    Disciplina * disciplina;
} Aluno; // renomea com o comando typedef

int main (void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno)); // faz a alocação dinamica de memória 
    if (aluno == NULL){ // verifica se houve erros na alocação
        printf("Sem memória!\n");
        exit(1);
    }

    // alocação dinamica de memoria para a variavel disciplina
    aluno->disciplina = (Disciplina*) malloc (sizeof(Disciplina)); //o sizeof não é multiplicado porque consideramos como se houvesse apenas 1 disciplina
    if (aluno->disciplina == NULL){ // verifica se houve erros na alocação
        printf("Sem memória!\n");
        exit(1);
    }


    // pega os dados fornecidos e os armazena 
    printf("Digite o nome: \n");
    scanf(" %[^\n]", aluno->nome );

    printf("Digite a idade: \n ");
    scanf("%d", &aluno->idade );

    printf("Digite o nome da disciplina: \n");
    scanf(" %[^\n]", aluno->disciplina->nome);

    printf("Digite a nota: \n");
    scanf("%f", &aluno->disciplina->nota);

    // faz a impressão dos dados do aluno
    printf("Dados: \n Nome: %s \n Idade: %d \n Disciplina: %s \n Nota: %2.f", aluno->nome, aluno->idade, aluno->disciplina->nome, aluno->disciplina.nota);

    // antes de finalizar, faz a liberação da memoria para evitar vazamentos de memória
    free(aluno->disciplina);
    free(aluno);
    return 0;
}
