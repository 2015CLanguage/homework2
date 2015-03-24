#include"stdio.h"
#include"math.h"
int main()
{
	float p,d,r,m;
	p=6000;
	d=300000;
	r=0.01;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("还清月数：%5.1f\n",m);
	return 0;
}
