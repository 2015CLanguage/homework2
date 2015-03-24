#include<stdio.h>
int main()
{
	float r,h,c,s,S,v,V;
	float pi=3.1415926;
	printf("请输入圆半径r，圆柱高h:");			
	scanf("%f,%f",&r,&h);						//要求输入圆半径r，圆柱高h
	//计算圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
	c=2*pi*r;									
	s=pi*r*r;
	S=4*pi*r*r;
	v=S*r/3;
	V=s*h;
	//输出圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
	printf("圆周长为：%6.2f\n",c);
	printf("圆面积为：%6.2f\n",s);
	printf("圆球表面积为：%6.2f\n",S);
	printf("圆球体积为：%6.2f\n",v);
	printf("圆柱体积为：%6.2f\n",V);
	return 0;
}
