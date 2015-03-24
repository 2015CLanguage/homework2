#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,p,p1,p2,p3,p4,p5;
	p=1000;
	a=0.0414;
	b=0.0468;
	c=0.054;
	d=0.0585;
	e=0.072;
	p1=p*(1+5*d);
	p2=p*(2*b+1)*(1+3*c);
	p3=p*(3*c+1)*(2*b+1);
	p4=p*pow(1+a,5);
	p5=p*pow(1+e/4,20);
	printf("p1=%f\n",p1);
	printf("p2=%f\n",p2);
	printf("p3=%f\n",p3);
	printf("p4=%f\n",p4);
	printf("p5=%f\n",p5);

	return 0;
}
