#include <stdio.h>

int main()
{
    
    float m[]={2,4,6,8,10};
    float *pf;
    
    pf=&m[2];
    
    printf("%f\n",*pf);
    printf("%f",pf[2]);
    
    return 0;
}
