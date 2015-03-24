#include <stdio.h>
#include <math.h>
void main()
{
	float r,h,l,s1,s2,v1,v2,PI=3.1415926;
	scanf("请输入半径和高%f%f",&r,&h);
	l=2*PI*r;
	s1=PI*r*r;
	s2=4*PI*r*r;
	v1=(4/3)*PI*r*r*r;
	v2=PI*r*r*h;
	printf("圆的周长为%.2f\n",l);
	printf("圆的面积为%.2f\n",s1);
	printf("圆球的表面积为%.2f\n",s2);
	printf("圆球的体积为%.2f\n",v1);
	printf("圆柱的体积为%.2f\n",v2);

}
