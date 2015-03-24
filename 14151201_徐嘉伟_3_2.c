#include<stdio.h>
#include<math.h>
int main()
{
	float a1,a2,a3,a5,a0,p,p1,p2,p3,p4,p5;
	p=1000;
	a0=0.0072;                          //活期利息
	a1=0.0414;                          //一年期利息
	a2=0.0468;                          //两年期利息
	a3=0.054;                           //三年期利息
	a5=0.0585;                          //五年期利息

	p1=p*(1+a5*5);                      //第一种方案
	p2=p*(1+2*a2)*(1+3*a3);             //第二种方案
	p3=p*(1+3*a3)*(1+2*a2);             //第三种方案
	p4=p*pow(1+a1,5);                   //第四种方案
	p5=p*pow(1+a0/4,4*5);               //第五种方案
	printf("p1=%f\n",p1);
	printf("p2=%f\n",p2);
	printf("p3=%f\n",p3);
	printf("p4=%f\n",p4);
	printf("p5=%f\n",p5);
	return 0;
}
