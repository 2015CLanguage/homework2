#include <stdio.h>
#include <math.h>
void main()
{
  float m,r;
	int d,p;
	d=300000;
	p=6000;
  r=0.01;
	m=log(p/(p-d*r))/log(1+r);
  printf("还清的月数为%.1f月",m);
}
