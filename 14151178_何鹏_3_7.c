#include"stdio.h"                             //编译预处理
#define pi 3.14                               //定义pi
int main()                                    //定义主函数
{                                             //函数开始
	float r,h,d,s1,s2,v1,v2;                    //定义float常量
	scanf("%f%f",&r,&h);                        //输入数值
	d=2*pi*r;                                   //函数计算部分
	s1=pi*r*r;
	s2=4*pi*r*r;
	v1=4.0/3*pi*r*r*r;
	v2=s1*h;
	printf("圆周长为%5.2f\n",d);                //输出数据
	printf("圆面积为%5.2f\n",s1);
	printf("圆球表面积为%5.2f\n",s2);
	printf("圆球体积为%5.2f\n",v1);
	printf("圆柱体积为%5.2f\n",v2);
	return 0;                                    //使函数返回值为0
}                                              //函数结束
