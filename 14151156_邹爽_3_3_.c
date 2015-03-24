#include<stdio.h>
#include<math.h>
int main()
{
    double d=300000,p=6000,r=0.01,m;
	m=log(p/(p-d*r))/log(1+r);
	printf("还清月数m=%4.1f\n",m);
	return 0;
}
