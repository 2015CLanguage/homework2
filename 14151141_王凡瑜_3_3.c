#include<stdio.h>
#include<math.h>
void main()
{
	double m,d=300000,p=6000,r=0.01;
	m=log(p/(p-d*r))/log(1+r);
	printf("需要%.1f个月才能还清贷款\n",m);
}
