#include<stdio.h>
#include<math.h>
int main()
{
	float r1,r2,r3,r4,r5,p,p1,p2,p3,p4,p5;
	p=1000;
	r1=0.0072;
	r2=0.0414;
	r3=0.0468;
	r4=0.054;
	r5=0.0585;
        p1=p*(1+5*r5);      //一次存五年期的利息
	p2=p*(1+2*r3)*(1+3*r4);//先存两年期再存三年期的利息
	p3=p*(1+3*r4)*(1+2*r3);//先存三年期再存两年期的利息
	p4=p*pow(1+r2,5);    //存一年期连存五年的利息
	p5=p*pow(1+r1/4,20);  //活期利息
	printf("p1=%f\n",p1);//输出一次存五年期的利息
	printf("p2=%f\n",p2);//输出先存两年期再存三年期的利息
	printf("p3=%f\n",p3);//输出先存三年期再存两年期的利息
	printf("p4=%f\n",p4); //输出存一年期连存五年的利息
	printf("p5=%f\n",p5);//输出活期利息
	return 0;
}
