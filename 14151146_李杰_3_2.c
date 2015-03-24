#include<stdio.h>
#include<math.h>
int main()
{
	float r1,r2,r3,r5,rh,p1,p2,p3,p5,ph;
	r1=0.0414;r2=0.0468;r3=0.054;r5=0.0585;rh=0.0072;
	p1=1000*(1+5*r5);
	p2=1000*(1+2*r2)*(1+3*r3);
	p3=1000*(1+3*r3)*(1+2*r2);
	p5=1000*pow((1+r1),5);
	ph=1000*pow((1+rh/4),20);
	printf("第1种方案本息和为%f\n",p1);
	printf("第2种方案本息和为%f\n",p2);
	printf("第3种方案本息和为%f\n",p3);
	printf("第4种方案本息和为%f\n",p5);
	printf("第5种方案本息和为%f\n",ph);
	return 0;
}
