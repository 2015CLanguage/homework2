#include<stdio.h>
#include<math.h>
int main()
{
	double r1,r2,r3,r5,r0,p,p1,p2,p3,p4,p5;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	r0=0.0072;
	p=1000;


	p1=p*(1+r5*5);									//一次存5年期
	p2=p*(1+r2*2)*(1+r3*3);							//先两年，后三年
	p3=p*(1+3*r3)*(1+r2*2);							//先三年，后两年
	p4=1000*pow(1+r1,5);							//存一年，到期后将本息和再存期1年，连续存五次
	p5=1000*pow(1+r0/4,4*5);						//活期存款，按季度结算
	
	//将各方案结果输出
	printf("第1种方案的本息和为:%f\n",p1);
	printf("第2种方案的本息和为:%f\n",p2);
	printf("第3种方案的本息和为:%f\n",p3);
	printf("第4种方案的本息和为:%f\n",p4);
	printf("第5种方案的本息和为:%f\n",p5);
	return 0;
}
