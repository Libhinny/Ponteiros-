#include <stdio.h>

int main (void){
    int n, notatotal = 0, aprovados = 0;
    printf("Número de questões: "); // solicita ao usuário o número de questões do gabarito
    scanf("%d", &n);
    char gab[n]; // vetor para armazenar o gabarito 
    int alunos[10], nota[10]; // vetor 'alunos' para guardar o número dos alunos e 'nota' para guardar a nota de cada aluno
    
    for (int x = 0; x < n; x++){ // preenche o gabarito das questões
        printf("Resposta: %i", x + 1);      //informa a reposta da questão
        gab[x] = getche();          //armazena a letra no gabarito
        printf("\n");
    }

    for (int x = 0; x < 10; x++){ // calcula a nota de cada aluno
        printf("Informe o número do aluno: ");
        scanf("%i", &alunos[x]);
        notatotal = 0;
        for (int a = 0; a < n ; a++){
            printf("Resposta do aluno %i para a questão %i", aluno[x], a + 1); //respostas dos alunos
            if (gab[a] == getche()) { // aqui faz a verificação se a resposta do aluno é a do gabarito
                notatotal++; 
        }
            printf("\n");
    }
    nota[a] = notatotal; // a nota do aluno será armazenada no indice correspondente 
}
    for (int a = 0; a < 10; a++){ // faz a impressão das notas dos alunos e calcula o total de aprovados 
        printf("Aluno %i nota = %d", alunos[a], nota[a]);
        if (nota[a] >= 6){
            aprovados++;
        }
    }

    printf("%% de aprovados = %d\n", (aprovados*100)/10);
    return 0;
}
