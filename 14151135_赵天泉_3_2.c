#include<stdio.h>
#include<math.h>
void main()
{
	double r1,r2,r3,r5,r0,p1,p2,p3,p4,p5;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	r0=0.0072;
	p1=1000*(1+5*r5);
	p2=1000*(1+2*r2)*(1+3*r3);
	p3=1000*(1+3*r3)*(1+2*r2);
	p4=1000*pow((1+r1),5);
	p5=1000*pow((1+r0/4),20);
	printf("p1=%f\n",p1);
    printf("p2=%f\n",p2);
    printf("p3=%f\n",p3);
    printf("p4=%f\n",p4);
    printf("p5=%f\n",p5);


}
