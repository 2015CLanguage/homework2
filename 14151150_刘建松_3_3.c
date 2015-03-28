#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m;
	d=300000 ;
	p=6000 ;
	r=0.01 ;
	m=(log10(p)-log10(p-d*r))/log10(1+r);
	m=m+0.05;
	printf("m=%.1f\n",m);
	return 0;
} 
