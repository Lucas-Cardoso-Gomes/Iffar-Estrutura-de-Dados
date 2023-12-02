#include <stdio.h>

int somaVetores(int vet[], int tam)
{
int i=0, soma=0;

while (i<6)
{
    soma+=vet[i];
    i++;
        
}
return soma;
}

int main()
{
    int soma;
    int vet[]={1,2,3,4,5};
    int tam=sizeof(vet);
    soma=somaVetores(vet, tam);
    printf("%d",soma);

    return 0;
}
