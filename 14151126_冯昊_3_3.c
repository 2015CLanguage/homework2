Enter file contents here
#include"stdio.h"
#include"math.h"

void main()
{
	double d, p,r,m,a;
	d=300000;
	p=6000;
	r=0.01;
	a=log(p)-log(p-d*r);
	m=a/log(1+r);
	printf("需要%5.1f个月\n",m);
}
