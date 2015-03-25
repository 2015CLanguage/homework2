#include <stdio.h>
#include <math.h>
void main()
{
	double d=300000,p=6000,r=0.01,m,a,b;
	a=p/(p-d*r);
	a=log(a);
	b=log(1+r);
	m=a/b;
	printf("month：%-7.1f\n",m);
}
