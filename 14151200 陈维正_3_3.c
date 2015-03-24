#include <stdio.h>
#include <math.h>
int main()
{
	float d,p,r,m,a,b,c;
	d=300000;
	p=6000;
	r=0.01;
	a=p-d*r;
	b=log(1+r);
	c=log(p/a);
	m=c/b;
	
	printf("m=%2.1f\n",m);
	return 0;
}
