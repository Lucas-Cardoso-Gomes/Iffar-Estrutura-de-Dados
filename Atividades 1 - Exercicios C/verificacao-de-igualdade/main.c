#include <stdio.h>

void vetoresIguais(int v1[], int v2[], int tamanho)
{
    int x=0,i=0;
    for (i=0;i<tamanho;i++)
    {
        if(v1[i] != v2[i])
        {
            x++;
        }
    }
    if(x>0)
    {
        printf("Valores diferentes!");
    }
    else
    {
        printf("Valores iguais!");
    }
    
}

int main()
{
    int tamanho, v1[]={1,2,3,4,5}, v2[]={1,2,3,4,5};
    
    tamanho=sizeof(v1)/sizeof(v1[0]);
    vetoresIguais(v1,v2,tamanho);

    return 0;
}

