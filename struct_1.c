#include <stdio.h>
#include <locale.h>
#define MAX 10

/** 1. Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.
**/

typedef struct {
    char nome[50];
    int pontos;
}Equipe;

void LeEquipe(Equipe C[]) {
    int i;
    printf ("Cadastro das equipes\n");
    for (i=0; i<MAX; i++) {
        printf ("Nome da equipe: ");
        fgets (C[i].nome, 50, stdin);
        printf ("Pontos da equipe: ");
        scanf ("%d%*c", &C[i].pontos);
    }
}

int EquipeVencedora(Equipe C[]) {
    int i, im, maior;

    for (i=0; i<MAX; i++){
        if(C[i].pontos > maior) {
            maior = C[i].pontos;
            im = i;
        }
    }
    return im;
}

int main () {
    int M;
    Equipe C[MAX];

    LeEquipe (C);
    M = EquipeVencedora(C);
    printf("Equipe:vencedora = %s", C[M].nome);
    printf("Pontos = %d", C[M].pontos);
}

/** 1. Criar uma estrutura para receber os nomes de clubes de futebol e seus
respectivos pontos no campeonato. Ler os nomes e os pontos e mostrar
qual equipe (nome e pontos) é a vencedora. Considerar 10 clubes no total.
**/
