#include <stdio.h>

union documentos{
    int cpf;
    int RG;
    int CNH;
};

typedef union documentos Docs;

int main(void){
    Docs documento;

    printf("Digite o CPF: \n ");
    scanf("%d", &documento.cpf);
    printf("Digite o RG: \n");
    scanf("%d", &documento.RG);
    printf("Digite o CNH: \n ");
    scanf("%d", &documento.CNH);

    printf("\n Documentos: \n CPF: %d RG: %d CNH: %d", documento.cpf, documento.RG, documento.CNH);

    return 0;
}
