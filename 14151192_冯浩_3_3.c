#include<stdio.h>
#include<math.h>
int main()
{
	double m,p,d,r,t;
	d=300000;
	p=6000;
	r=0.01;
	t=p/(p-d*r);
	m=log(t)/log(1+r);
	printf("需要的月份数为:%6.1f\n",m);
	return 0;
}
