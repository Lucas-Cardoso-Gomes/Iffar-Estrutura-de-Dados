#include <stdio.h>
#include <windows.h>

int teste()
{
    int x=10;
    int *pi,*pj;
    pi=&x;
    pj=pi;

    printf("\n\tValor de num.......: %d\n", x);
    printf("\tEndereço de num....: %p\n", &x);
    printf("\tValor de *pi.......: %p\n", pi);
    printf("\tValor de *pj.......: %p\n", pj);
    sleep(1);
    system("cls");
    color();

}

void main()
{
    int i=1;

    while(1)
    {
        printf("%d\n",i++);
        teste();

    }

}
