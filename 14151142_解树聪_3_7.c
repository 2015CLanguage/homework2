#include<stdio.h>         //编译预处理指令
#define PI 3.1416         //利用符号常量
#include <math.h>         //用到pow函数
int main()                //主函数
{                         //函数开始标志
	float r,h,c,s,S,v,V;             //声明，定义变量
	printf("请输入圆半径r,圆柱高h:");//提示用户输入
	scanf("%f,%f",&r,&h);            //输入
	c=2*PI*r;                        //进行运算
	s=PI*pow(r,2);
	S=4*PI*pow(r,2);
	v=(4.0/3)*PI*pow(r,3);
	V=PI*h*pow(r,2);
	printf("圆周长为%.2f\n圆面积为%.2f\n圆球表面积为%.2f\n圆球体积为%.2f\n圆柱体积为%.2f\n",c,s,S,v,V);//输出结果
	return 0;                        //函数值返回0
}                         //函数结束标志
