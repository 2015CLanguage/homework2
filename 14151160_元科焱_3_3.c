#include <stdio.h>
#include <math.h>
int main()
{
	float d,p,r,m;
	d=300000.0;
	p=6000.0;
	r=0.01;
	m=log(p/(p-d*r))/log(1+r);
	printf("m=%.1f\n",m);
	return 0;
}
