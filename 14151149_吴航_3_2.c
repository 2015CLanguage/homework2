#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,p,x,y,z,j,k;
	a=0.0414;
	b=0.0468;
	c=0.054;
	d=0.085;
	e=0.0072;
	p=1000;
	x=p*(1+5*d);
	y=p*(1+2*b)*(1+3*c);
	z=p*(1+3*c)*(1+2*b);
	j=p*(1+a)*(1+a)*(1+a)*(1+a)*(1+a);
	k=p*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4)*(1+e/4);
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("z=%f\n",z);
	printf("j=%f\n",j);
	printf("k=%f\n",k);
	return 0;
}
