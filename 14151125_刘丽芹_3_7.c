#include "stdio.h"
#include "math.h"
void main()
{
	double r,h;
	double c,s,s1,v,v1,pi;
	pi=3.14;
	printf("请输入圆半径，圆柱高");
	scanf("%lf%lf",&r,&h);
	c=2*pi*r;
	s=pi*r*r;
	s1=4*pi*r*r;
	v=4/3*pi*pow(r,3);
	v1=s*h;
	printf("圆周长为%3.2f\n",c);
	printf("圆面积为%3.2f\n",s);
	printf("圆球表面积为%3.2f\n",s1);
	printf("圆球体积为%3.2f\n",v);
	printf("圆柱体表面积为%3.2lf\n",v1);
} 
