#include <stdio.h>

union documentos{ // definição da union com os campos de cpf, rg e cnh 
    int cpf;
    int RG;
    int CNH;
};

typedef union documentos Docs; // renomeação da union documentos para Docs

int main(void){
    Docs documento; // def. da variável documento do tipo Docs

    // pega os dados do user e os armazena 
    printf("Digite o CPF: \n ");
    scanf("%d", &documento.cpf);
    printf("Digite o RG: \n");
    scanf("%d", &documento.RG);
    printf("Digite o CNH: \n ");
    scanf("%d", &documento.CNH);

    // imprime os dados armazenados na union
    printf("\n Documentos: \n CPF: %d RG: %d CNH: %d", documento.cpf, documento.RG, documento.CNH);

    return 0;
}
