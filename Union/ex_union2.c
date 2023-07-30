#include <stdio.h>

typedef union indice_a{ // def. da union com os campos que informam os indices de determinado aluno
    float ig, ira, irt;
}Indice_a;

typedef struct aluno{ // struct com os campos qeu informam os dados de determinado aluno
    char nome[20];
    int matricula;
    char curso[20];
    Indice_a indice;

}Aluno; // renomeação da struct


int main(void){
    Aluno dados; // def. da variável dados do tipo Aluno
    int op; // armazena a opção escolhida pelo user

    // pega os dados informados pelo user e os armazena 
    printf("Digite o nome: ");
    scanf(" %[^\n]", dados.nome);
    printf("Digite a matricula: ");
    scanf("%d", &dados.matricula);
    printf("Digite o curso: ");
    scanf(" %[^\n]", dados.curso);

    // solicita ao usuário que escolha o indice que deseja informar ao sistema
    printf("Digite: \n 0 - ig \n 1 - IRA\n 2 - IRT ");
    scanf("%d", &op);
   
    // trata da opção escolhida
    switch (op)
    {
    case 0:
       printf("Informe o IG: ");
       scanf("%f", &dados.indice.ig);
        break;
    
    case 1:
    printf("Informe o IRA: ");
       scanf("%f", &dados.indice.ira);
        break;
    case 2:
        printf("Informe o IRT: ");
        scanf("%f", &dados.indice.irt);
    default:
        break;
    }

    return 0;
}
