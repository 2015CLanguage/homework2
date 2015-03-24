#include <stdio.h>
int main()
{
	float r,h,c,s1,s2,v1,v2,pi=3.1415;
	printf("请输入圆半径:");
	scanf("%f",&r);
	printf("请输入圆柱高度:");
	scanf("%f",&h);
	c=2*pi*r;
	s1=pi*r*r;
	s2=4*pi*r*r;
	v1=4/3*pi*r*r*r;
	v2=pi*r*r*h;
	printf("圆周长为%.2f\n圆面积为%.2f\n球面积为%.2f\n球体积为%.2f\n圆柱体积为%.2f\n",c,s1,s2,v1,v2);
	return 0;
}
	
