#include <stdio.h>
#include <math.h>
void main()
{
	float a,r1,r2,r3,r4,r5,p1,p2,p3,p4,p5;
	a=1000; //输入本金
	r1=0.0414; //输入存款利息
	r2=0.0468;
	r3=0.054;
	r4=0.0585;
	r5=0.0072;
	p1=a*(1+5*r4);   //计算本息和
	p2=a*(1+2*r2)*(1+3*r3);
	p3=a*(1+3*r3)*(1+2*r2);
	p4=a*pow(1+r1,5);
	p5=a*pow(1+r5/4,4*5);
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n",p1,p2,p3,p4,p5);//输出本息和
}
