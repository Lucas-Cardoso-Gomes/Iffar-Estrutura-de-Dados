#include <stdio.h>

void mediaMaior(float v[], int tamanho)
{
    float media=0;
    float maior=0;
    
    for(int i=0; i<tamanho; i++)
    {
        if(v[i]>=maior)
        {
            maior=v[i];
        }
        media+=v[i];
    }
    
    printf("Media: %.02f\n", media);
    printf("Maior: %.02f", maior);
    
}

int main()
{
    int tamanho;
    float v[]={1.0,2.0,3.0,4.0,5.0},maior;
    
    tamanho=sizeof (v)/sizeof v[0];
    
    mediaMaior(v, tamanho);

    return 0;
}
