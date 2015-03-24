#include "stdio.h"
#include "math.h"
int main()
{
	float r0,r1,r2,r3,r5,p0,a,s,d,f,g;
	r0=0.0072;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	p0=1000;
	
	a=p0*(1+5*r5);
	s=p0*(1+2*r2)*(1+3*r3);
	d=p0*(1+3*r3)*(1+2*r2);
	f=p0*pow(1+r1,5);
	g=p0*pow(1+r0/4,20);
	printf("p1=%f\n",a);
	printf("p2=%f\n",s);
	printf("p3=%f\n",d);
	printf("p4=%f\n",f);
	printf("p5=%f\n",g);
	return 0;
}
