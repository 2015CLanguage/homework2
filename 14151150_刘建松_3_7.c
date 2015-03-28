#include<stdio.h>
int main()
{
	float C,S1,S2,m1,m2,r,h,pi;
	pi=3.141592;
	printf("请输入圆半径r，圆柱高h:");
	scanf("%f%f\n",&r,&h);
	C=2*pi*r;
	S1=pi*r*r;
	S2=4*pi*r*r;
	m1=4*pi*r*r*r/3;
	m2=pi*h*r*r;
	printf("圆周长为：%.2f\n",C);
	printf("圆面积为：%.2f\n",S1);
	printf("圆球表面积为：%.2f\n",S2);
	printf("圆球体积为：%.2f\n",m1);
	printf("圆柱体积为：%.2f\n",m2);
	return 0;
} 
