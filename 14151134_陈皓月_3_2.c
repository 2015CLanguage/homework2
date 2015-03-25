#include<stdio.h>
#include<math.h>
int main()
{float a,r1,r2,r3,r4,r5,p1,p2,p3,p4,p5;
	a=1000;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r4=0.0585;
	r5=0.0072;
	p1=a*(1+5*r4);
	p2=a*(1+2*r2)*(1+3*r3);
	p3=a*(1+3*r3)*(1+2*r2);
	p4=a*pow(1+r1,5);
	p5=a*pow(1+r5/4,20);
	printf("方法一利息p1=%f\n",p1);
	printf("方法二利息p2=%f\n",p2);
	printf("方法三利息p3=%f\n",p3);
	printf("方法四利息p4=%f\n",p4);
	printf("方法五利息p5=%f\n",p5);
	return 0;
}
