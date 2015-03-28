#include"stdio.h"
int main()
{
	float r,h,c,s1,s2,v1,v2;
	float pi=3.1415;
	printf("请输入圆的半径r,圆柱的高h:");
	scanf("%f,%f",&r,&h);
	c=2*pi*r;
	s1=pi*r*r;
	s2=4*pi*r*r;
	v1=4*pi*r*r*r/3.0;
	v2=s1*h;
	printf("圆周长为:%.2f\n",c);
	printf("圆面积为:%.2f\n",s1);
	printf("圆球表面积为:%.2f\n",s2);
	printf("圆球体积为:%.2f\n",v1);
	printf("圆柱体积为:%.2f\n",v2);
	return 0;
}
