#include "stdio.h"
#include "math.h"
int main()
{
	float r0,r1,r2,r3,r5,p0,p1,p2,p3,p4,p5;
	r0=0.0072;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	p0=1000;
	
	p1=p0*(1+5*r5);
	p2=p0*(1+2*r2)*(1+3*r3);
	p3=p0*(1+3*r3)*(1+2*r2);
	p4=p0*pow(1+r1,5);
	p5=p0*pow(1+r0/4,20);//五种方案分别计算
	printf("p1=%f\n",p1);
	printf("p2=%f\n",p2);
	printf("p3=%f\n",p3);
	printf("p4=%f\n",p4);
	printf("p5=%f\n",p5);//五种方案分别输出
	return 0;
}
