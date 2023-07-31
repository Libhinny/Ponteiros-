#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TURMAS 2
#define MAX_VAGAS 4

typedef struct aluno {
    int mat;
    char nome[81];
    float nota[3];
    float media;
}Aluno;

typedef struct turma{
    char id; // caractere que identifica a turma, por exemplo, A ou B
    int vagas; // número de vagas disponiveis para fechar a turma
    Aluno * alunos[MAX_VAGAS];
}Turma;

int main (void){

    char id, nome[81];
    Turma ** turma = (Turma **)malloc(MAX_TURMAS *sizeof(Turma *));
    if(turma == NULL){
        printf("Sem memória!\n");
        exit(1);
    }
    Turma * mTurma;
    int op = 0, n = 0, matricula = 0;

    printf("Bem-vindo ao Programa de Gerenciamento de Turmas!\n");
    printf("Este programa gerencia as turmas ofertadas, fornecendo as \nfuncionalidades de matricula, lancamento de notas e listagem de \nalunos.");
    printf("\nAutor: Libhinny \t Versão: 1.0.5");
    
    while (op != 6){
        printf("Digite sua opção a seguir!");
        printf("\n\tMenu:\n - Criar Turma\n - Listar Turmas \n - Matricular aluno \n - Lançar notas \n - Listar aluno \n - Sair \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
        printf("Criando uma nova turma...");
        printf("\nDigite um id: ");
        scanf("%c", &id);
        if (n == MAX_TURMAS){
            printf("Número máximo atingido");
        } else if (busca_turma(turma, n, id) != NULL){
            printf("A turma já existe!");
        }else{
            turma[n] = (Turma *)malloc(sizeof(Turma));
            turma[n] = cria_turma(id);
            n++;
            printf("Turma %c criada com sucesso!", id);
        }
            break;
        
        case 2:
            imprime(turma, n);
            break;
        case 3:
            printf("Matriculando aluno...");
            printf("\nDigite o id da turma: ");
            scanf("%c", &id);
            mTurma = busca_turma(turma, n, id);
            if (mTurma != NULL){
                printf("Digite a matricula: ");
                scanf("%d", &matricula);
                printf("Digite o nome: ");
                scanf(" %[^\n]", (char *)&nome);
                matricula_aluno(mTurma, matricula, nome);
            } else{
                printf("A turma não existe!");
            }
            break;
        case 4:
            printf("Lançando as notas...");
            printf("\nDigite o id da turma: ");
            scanf("%c", &id);
            mTurma = busca_turma(turma, n, id);
            if (mTurma != NULL){
                lanca_notas(mTurma);
            } else{
                printf("A turma não existe!");
            }
            break;
        case 5:
            printf("Listando alunos...");
            printf("\nDigite o id da turma: ");
            scanf("%c", &id);
            mTurma = busca_turma(turma, n, id);
            if (mTurma != NULL){
                imprime_alunos(mTurma);
            }else{
                printf("A turma não existe!");
            }
            break;
        case 6:
            printf("Obrigado por usar o programa!");
            break;
        default:
            printf("Opção inválida!");
            break;
        }
    }
    
    for (int i = 0; i < n; i++){
        free(turma[i]);
    }
    
    free(turma);

    return 0;
}

Turma * cria_turma (char id){
    Turma * turma = (Turma *)malloc(sizeof(Turma));
    turma->vagas = MAX_VAGAS;
    turma->id = id;
    for (int i = 0; i < MAX_VAGAS; i++){
        turma->alunos[i] = NULL;
    }
    return turma;
}

void imprime (Turma ** turmas, int n){
    for (int i = 0; i < n; i++){
        Turma * turma = turmas[i];
        printf("Turma %c : vagas disponíveis: %d\n", turma->id, turma->vagas);
    }
}

Turma * busca_turma (Turma ** turma, int n, char id){
    int i = 0, indice = -1;
    for (i = 0; i < n; i++){
        if (turma[i]->id == id){
            indice = i;
        }
    }
    if (indice == -1){
        return NULL;
    } 
    else{
        return turma[indice];
    }
}

void matricula_aluno(Turma * turma, int mat, char * nome){
    if (turma->vagas == 0){
        printf("Não há vagas disponiveis nesta turma %c \n", turma->id);
        return;
    }
    Aluno * novo_aluno = (Aluno *)malloc(sizeof(Aluno));
    novo_aluno->mat= mat;
    strcpy(novo_aluno->nome, nome);
    novo_aluno->nota[0] = 0;
    novo_aluno->nota[1] = 1;
    novo_aluno->nota[2] = 2;
    novo_aluno->media = 0;

    for (int i = 0; i < MAX_VAGAS; i++){
        if (turma->alunos[i] == NULL){
            turma->alunos[i] == novo_aluno;
            turma->vagas--;
            printf("Aluno matriculado!\n");
            return;
        }
    }
}

void lanca_notas(Turma * turma){
    int s;
    float soma = 0;
    printf("Lançamento de notas da turma %c:\n", turma->id);
    for (int j = 0; j < MAX_VAGAS; j++){
        if (turma->alunos[j] != NULL){
            printf("Matricula: %d \n Aluno: %s\n", turma->alunos[j]->mat, turma->alunos[j]->nome);
            for (s = 0; s < 3; s++){
                printf("Digite a nota %d: ", s+1);
                scanf("%f", &turma->alunos[j]->nota[s]);
            }
            for (s = 0; s < 3; s++){
                soma += turma->alunos[j]->nota[s];
            }
            turma->alunos[j]->media = soma/3;
        }
    }
    printf("Notas lançadas!");
}

    void imprime_alunos (Turma * turma){
        printf("Alunos da turma %c:\n", turma->id);
        for (int i = 0; i < MAX_VAGAS; i++){
            Aluno * aluno = turma->alunos[i];
            if (aluno != NULL){
                printf("Matricula: %d\n", aluno->mat);
                printf("Nome: %s\n", aluno->nome);
                printf("Notas: %.1f, %.1f, %.1f\n", aluno->nota[0], aluno->nota[1], aluno->nota[2]);
                printf("Media: %.1f\n", aluno->media);
            }
        }
    }
