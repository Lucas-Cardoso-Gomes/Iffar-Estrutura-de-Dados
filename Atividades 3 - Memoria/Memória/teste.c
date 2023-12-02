#include <stdio.h>
#include <locale.h>
int main()

{
setlocale(LC_ALL,"portuguese");

    int vetor[]={1,2,3,4,5,6,7,8};
    printf("%p",vetor);
    printf("\n");
    printf("%p",vetor+1);
    printf("\n");
    printf("%p",vetor+6);


    return 0;
}