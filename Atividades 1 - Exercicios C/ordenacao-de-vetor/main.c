#include <stdio.h>

void bubleSort(int v[], int tam)
{
    int aux;
    for(int i=0; i<tam-1; i++)
    {
        for(int i=0; i<tam-1; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }
    for(int i=0;i<tam;i++)
    {
    printf("Ordenado: %i\n", v[i]);
    }
}

int main()
{
    int tam;
    int v[]={3,4,5,7,8,1,15};
    tam=sizeof(v)/sizeof(v[0]);
    bubleSort(v,tam);

    return 0;
}
