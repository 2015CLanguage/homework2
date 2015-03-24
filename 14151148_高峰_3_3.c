#include"stdio.h"
#include"math.h"
int main()
{
	int d,p;
	double m,r;
	d=300000;
	p=6000;
	r=1/100;
	m=log(p/(p-d*r))/log(1+r);
	printf("需要%.1f个月来还款\n",m);
	return 0;

}
