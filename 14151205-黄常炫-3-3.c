#include"stdio.h"
#include"math.h"
int main()
{
	float m,p,d,r;
	d=300000;
	p=6000;
	r=0.01;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("m=%7.1f\n",m);
	return 0;
}
