#include <stdio.h>
#include <math.h>
void main()
{
	float d=300000,p=6000,r=0.01,m;
    m=log(p/(p-d*r))/log(1+r);
    printf("%.1f\n",m);
}
