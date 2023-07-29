#include <stdio.h>

int main (void){
    int n, notatotal = 0, aprovados = 0;
    printf("Número de questões: ");
    scanf("%d", &n);
    char gab[n]; 
    int alunos[10], nota[10/n];
    
    for (int x = 0; x < n; x++){
        printf("Resposta: %i", x+1);      //informa a reposta da questão
        gab[x] = getche();          //armazena a letra no gabarito
    }

    for (int x = 0; x < 10; x++){
        printf("Informe o numero do aluno: ");
        scanf("%i", &alunos[x]);
        notatotal=0;
        for (int a = 0; a < n ; a++){
            printf("Resposta aluno: %i", x+1); //respostas dos alunos
            if (gab[a] == getche()) {
                notatotal++; 
        }
    }
    nota[x] = notatotal; //o aluno da volta do laço vai receber a nota que obteve
}
    for (int a = 0; a < 10; a++){
        printf("Aluno %i nota = %f", alunos[a], nota[a]);
        if (nota[a] >= 6){
            aprovados++;
        }
    }

    printf("%% de aprovados = %f", (aprovados*100)/10);
    return 0;
}
