#include<stdio.h>
#include<math.h>
int main()
{float d,p,r,m,m1;
	d=30000;
	p=6000;
	r=0.01;
	m1=p/(p-d*r);
	m=log(m1)/log(1+r);
	printf("还款所需月数为%.1f个月\n",m);
	return 0;
}
