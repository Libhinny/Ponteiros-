#include <stdio.h>

// Versão do exemplo anterior, mas usando ponteiros

typedef union indice_a{
    float ig, ira, irt;
}Indice_a;

typedef struct aluno{
    char nome[20];
    int matricula;
    char curso[20];
    Indice_a indice;

}Aluno;


int main(void){
    Aluno * dados = (Aluno *)malloc(sizeof(Aluno));
    if (dados == NULL){
        printf("Sem memória!");
        exit(1);
    }
  
    int op;

    printf("Digite o nome: ");
    scanf(" %[^\n]", dados->nome);
    printf("Digite a matricula: ");
    scanf("%d", &dados->matricula);
    printf("Digite o curso: ");
    scanf(" %[^\n]", dados->curso);
    printf("Digite: \n 0 - ig \n 1 - IRA\n 2 - IRT ");
    scanf("%d", &op);
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
