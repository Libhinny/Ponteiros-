#include <stdio.h>

// representa os meses
typedef enum {
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, 
        MAIO, JUNHO, JULHO, AGOSTO, 
    SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}Mes; // renomea com o comando typedef

typedef struct data{ // struct que armazenar a data
    int dia;
    Mes mes;
    int ano;
}Data; // renomea com o comando typedef

int main (void){
    Data data; // declara a variavel data do tipo 'Data'

    // leitura da data
    printf("Digite o dia: ");
    scanf("%d", &data.dia);

    printf("Digite o mes (1 a 12): ");
    int mes;
    scanf("%d", &mes);

    // verificação se o mês está dentro do intervalo válido
    if (mes < JANEIRO || mes > DEZEMBRO) {
        printf("Mes invalido!\n"); // se não, é abortado
        return 1;
    }

    data.mes = (Mes)mes;

    printf("Digite o ano: ");
    scanf("%d", &data.ano);

    // imprime da data no formato "dd/mm/aaaa"
    printf("Data: %02d/%02d/%04d\n", data.dia, data.mes, data.ano); // usando essa formatação, a data fica com o formato ideal quando impresso na tela

    return 0;
}
