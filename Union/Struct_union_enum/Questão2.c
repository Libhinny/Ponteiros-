#include <stdio.h>

typedef union tipo{ // definindo a union agrupando diferentes tipos de produtos
    char alimento[20];
    char bebida[20];
    char eletronico[20];

}Tipo;

typedef struct produto{ // definição da struct com os campos de nome, preço e tipo do produto (que está dentro da union)
    char nome[20];
    float preco;
    Tipo tip;
}Produto;

int main (void){
    Produto prod; // armazena as informações do produto
    int op; // armazena a opção escolhida


    // armazena os dados fornecidos pelo user, bem como a op do tipo do produto
    printf("Digite o nome do produto: \n");
    scanf(" %[^\n]", prod.nome);
    printf("Digite o preco do produto: \n");
    scanf("%f", &prod.preco);
    printf("Escolha a opcão referente ao produto: \n 0 - Alimento \n 1 - Bebida \n 2 - Eletronico ");
    scanf("%d", &op);

   switch (op) // trata da escolha do usuário e le a classe do produto
   {
       case 0:
       scanf(" %[^\n]", prod.tip.alimento);
       printf("É um alimento \n");
       break;

       case 1:
       scanf(" %[^\n]", prod.tip.bebida);
       printf("O produto é uma bebida \n");
       break;

       case 2:
       scanf(" %[^\n]", prod.tip.eletronico);
       printf("O produto é um eletronico \n");
       break;
       
    default:
        printf("Opção inválida\n");
        return 1;

   }

   // impressão dos dados 
   printf("Dados do produto: \n Nome: %s \n Preço: %f \n", prod.nome, prod.preco);

   // imprime a classe de acordo com a opção escolhida
   switch (op) {
    case 0:
        printf("Classe do produto: %s\n", prod.tip.alimento);
        break;
    case 1:
        printf("Classe do produto: %s\n", prod.tip.bebida);
        break;
    case 2:
        printf("Classe do produto: %s\n", prod.tip.eletronico);
        break;
    }

    return 0;
}
