#include<stdio.h>
#include<math.h>
int main()
{
	double p,r1,r2,r3,r4,r5,p1,p2,p3,p4,p5;       
	p=1000;                                    
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r4=0.0585;
	r5=0.0072;
	p1=p*(1+5*r4);
	p2=p*(1+2*r2)*(1+3*r3);
	p3=p*(1+3*r2)*(1+2*r3);
	p4=p*pow(1+r1,5);
	p5=p*pow(1+r5/4,20);
	printf("p1=%lf\n",p1);
	printf("p2=%lf\n",p2);
	printf("p3=%lf\n",p3);
	printf("p4=%lf\n",p4);
	printf("p5=%lf\n",p5);
	return 0;
}
