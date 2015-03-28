#include <stdio.h>

#include <math.h>

int main()
{
    float d=300000,p=6000,r=0.01,a,b,m;
    a=log(p)-log(p-d*r);
    b=log(1+r);
    m=a/b;
    printf("m=%6.1f\n",m);
    return 0;
}
