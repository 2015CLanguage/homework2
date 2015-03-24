#include <stdio.h>
int main()
{
	float pi=3.141526;
	float r,h,a,b,c,d,e;
	printf("请输入圆的半径r和圆柱的高h\n");
	scanf("%lf,%lf",&r,&h);
	a=2*pi*r;
	b=r*r*pi;
	c=4*pi*r*r;
	d=pi*r*r*r*3/4;
	e=pi*r*r*h;
	
	printf("该圆的周长为:a=%6.2f\n",a);
	printf("该圆的面积为:b=%6.2f\n",b);
	printf("圆球的表面积为:c=%6.2f\n",c);
	printf("圆球的体积为:d=%6.2f\n",d);
	printf("圆柱的体积为:e=%6.2f\n",e);
	
	
	
	return 0;

}
