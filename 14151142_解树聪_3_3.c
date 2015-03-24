#include<stdio.h>  //编译预处理指令
#include<math.h>   //用到log函数
int main()         //定义主函数
{                  //函数开始标志
	float d=300000,p=6000,r=0.01,m; //声明，定义变量并赋值
	m=log(p/(p-d*r))/log(1+r);      //进行运算
	printf("m=%.1f\n",m);           //输出结果
	return 0;                       //执行完毕，函数值返回0
}                  //函数结束标志
