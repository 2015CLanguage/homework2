#include <stdio.h>
#include <math.h>

int main()
{
     float m,p,d,r;
     d=300000.0,p=6000.0,r=0.01;
     m=log(p/(p-d*r))/log(1+r);
     printf("还清贷款所需月份：%.2f\n",m);
     return 0;
     }
