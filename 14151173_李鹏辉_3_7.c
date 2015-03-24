#include <stdio.h>
#define PI 3.1415
void main()
{
	double r,h,c,area,v,s,v1;
	printf("请输入圆半径和圆柱高:");
	scanf("r=%lfh=%lf",&r,&h);
	c=2*PI*r;
	area=PI*r*r;
	v=4.0/3*PI*r*r*r;
	s=4*PI*r*r;
	v1=PI*r*r*h;
	printf("圆周长为:%.2lf\n圆面积为:%.2lf\n圆球表面积为:%.2lf\n圆球体积为:%.2lf\n圆柱体积为:%.2lf\n",c,area,s,v,v1);
}
