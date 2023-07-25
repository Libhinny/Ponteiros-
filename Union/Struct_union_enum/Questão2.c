#include <stdio.h>

typedef union tipo{
    char alimento[20];
    char bebida[20];
    char eletronico[20];

}Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipo;
}Produto;

int main (void){
    Produto prod;
    int op;

    printf("Digite o nome do produto: \n");
    scanf(" %[^\n]", prod.nome);
    printf("Digite o preco do produto: \n");
    scanf("%f", &prod.preco);
    printf("Escolha a opcão referente ao produto: \n 0 - Alimento \n 1 - Bebida \n 2 - Eletronico ");
    scanf("%d", &op);

   switch (op)
   {
       case 0:
       scanf(" %[^\n]", prod.tipo.alimento);
       printf("É um alimento \n");
       break;

       case 1:
       scanf(" %[^\n]", prod.tipo.bebida);
       printf("O produto é uma bebida \n");
       break;

       case 2:
       scanf(" %[^\n]", prod.tipo.eletronico);
       printf("O produto é um eletronico \n");
    default:
       break;

   }

    return 0;
}
