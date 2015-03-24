#include<stdio.h>
#include<math.h>						//引用数学函数模块
int main()
{
	float r,h,l,s,S,v,V;				//定义变量
	float pi=3.141526;					//定义pi值
	printf("请输入圆半径r和圆柱高h:");
	scanf("%f%f",&r,&h);           //输入
	l=2*pi*r;
	s=pi*r*r;
	S=4*pi*r*r;									//计算
	v=4.0*pi*r*r*r/3.0;
	V=pi*r*r*h;
	printf("圆周长为:%6.2f\n",l);
	printf("圆面积为:%6.2f\n",s);
	printf("圆球表面积为:%6.2f\n",S);       //输出
	printf("圆球体积为:%6.2f\n",v);
	printf("圆柱体体积为:%6.2f\n",V);
	return 0;

}
