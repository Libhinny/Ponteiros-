#include <stdio.h>

// Versão do exemplo anterior, mas usando ponteiros

typedef union indice_a{ // definição da union com os indices 
    float ig, ira, irt;
}Indice_a;

typedef struct aluno{ // definição da struct contendo os campos de dados de determinado aluno
    char nome[20];
    int matricula;
    char curso[20];
    Indice_a indice;

}Aluno;


int main(void){
    Aluno * dados = (Aluno *)malloc(sizeof(Aluno)); // faz a alocação dinamica, já que estamos usando o ponteiro dados do tipo Aluno
    if (dados == NULL){ // verificação se a alocação ocorreu corretamente
        printf("Sem memória!");
        exit(1);
    }
  
    int op;

    // pega os dados informados pelo user 
    printf("Digite o nome: ");
    scanf(" %[^\n]", dados->nome);
    printf("Digite a matricula: ");
    scanf("%d", &dados->matricula);
    printf("Digite o curso: ");
    scanf(" %[^\n]", dados->curso);

    // pede que o usuário informe a opção desejada 
    printf("Digite: \n 0 - ig \n 1 - IRA\n 2 - IRT ");
    scanf("%d", &op);

    // trata da opção
    switch (op)
    {
    case 0:
       printf("Informe o IG: ");
       scanf("%f", &dados->indice.ig);
        break;
    
    case 1:
    printf("Informe o IRA: ");
       scanf("%f", &dados->indice.ira);
        break;
    case 2:
        printf("Informe o IRT: ");
        scanf("%f", &dados->indice.irt);
    default:
        break;
    }

    return 0;
}
