#include<stdio.h>               //函数预处理
#include<math.h>
int main()                      //定义主函数
{                               //函数开始
	double d,p,r,m;               //定义变量
	d=300000.0;                   //变量赋值
	p=6000.0; 
	r=0.001;
	m=log(p/(p-d*r))/log(1+r);    //函数计算
	printf("m=%4.1lf",m)          //输出结果
	return 0;                     //返回数值
}                               //函数结束
