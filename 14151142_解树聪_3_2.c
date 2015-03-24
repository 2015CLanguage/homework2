#include<stdio.h>     //编译预处理指令
#include<math.h>      //程序中要调用pow函数 
int main()            //定义主函数
{                     //函数开始标志
	float p1,p2,p3,p4,p5,p=1000,r1=0.0585,r2=0.054,r3=0.0468,r4=0.0414,r5=0.0072;//声明，定义变量
	p1=p*((1+5*r1));          //进行运算
	p2=p*(1+2*r3)*(1+3*r2);
	p3=p*(1+3*r2)*(1+2*r3);
	p4=p*pow(1+r4,5);
	p5=p*pow(1+(r5)/4,4*5);
	printf("p1=%f\n",p1);     //输出结果
	printf("p2=%f\n",p2);
	printf("p3=%f\n",p3);
	printf("p4=%f\n",p4);
	printf("p5=%f\n",p5);
	return 0;                 //执行完毕返回函数值0
}                      //函数结束标志
