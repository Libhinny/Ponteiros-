#include <stdio.h>


typedef struct professor{
    char nome[20];
    char disciplinas[3];
    int reg_trabalho;
}Professor;



int dados (Professor prof){
    Professor prof;

    printf("Digite seu nome: \n");
    scanf(" %[^\n]", prof.nome);

        for (int i = 0; i < 3; i++){
            printf("Informe as disciplinas: \n");
            scanf(" %[^\n]", prof.disciplinas[i]);
    }

    printf("Informe as horas de trabalho: \n");
    scanf("%d", &prof.reg_trabalho);

    return dados;

}



void imprime(Professor prof){
    int i;
    printf("Os dados informados são: \n");
    printf("Nome: %s \n Disciplinas: %s %s %s \n Regime de Trabalho: %d \n", prof.nome, prof.disciplinas[i], prof.reg_trabalho);
    return;
}


int main (void){
    int prof;
    dados (Professor (prof));
    imprime;
    return 0;
}
