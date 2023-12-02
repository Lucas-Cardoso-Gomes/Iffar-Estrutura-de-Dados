#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct pilha {
    int topo;
    int vetor[MAX];
    char nomes[20][MAX];
} Pilha;

Pilha inicializarPilha(Pilha p) {
    p.topo = 0;
    return p;
}

int estahVazia(Pilha p){
    if (p.topo == 0)
        return 1;
    else
        return 0;
}

int estahCheia(Pilha p){
    if (p.topo == MAX)
        return 1;
    else
        return 0;
}

Pilha empilha(Pilha p, int v, char *nomes, int* deuCerto){
    if (estahCheia(p))
        *deuCerto = 0;
    else {
        p.vetor[p.topo] = v;
        p.topo++;
        strcpy(p.nomes[p.topo], nomes);
        *deuCerto = 1;
    }

    return p;
}

Pilha desempilha(Pilha p, int* v, int* deuCerto){
    if (estahVazia(p))
        *deuCerto = 0;
    else {
        p.topo--;
        *v = p.vetor[p.topo];
        *deuCerto = 1;
    }

    return p;
}

int pegarTopo(Pilha p, int* topo){
    if (estahVazia(p))
        return 0;
    else {
        *topo = p.vetor[p.topo-1];
        return 1;
    }
}

void mostraOVetorDaPilha(Pilha p){
    int i;
    printf("\n --------------- \n");
    for (i=p.topo-1; i>=0; i--)
    {
        printf("Cod.: %d - Nome: ", p.vetor[i]);
        printf("%s\n", p.nomes[p.topo]);
    }
    printf("\n --------------- \n");
}

int main(int argc, char** argv)
{
    Pilha a;

    a = inicializarPilha(a);

    int i;
    int erro;

    //Vai inserir  10 valores na pilha
    for (i=1;i<=5;i++) {
        printf("Vai empilhar o valor ... %d\n", i);
        a = empilha(a, i, "Lucas",&erro);
        printf("O código de retorno de erro foi ... %d\n", erro);
    }

    printf("A seguir a pilha A");
    mostraOVetorDaPilha(a);

    return 0;
}