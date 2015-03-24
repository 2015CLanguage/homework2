#include <stdio.h>
int main()
{
	float h,r,a,b,c,d,e;
	float pi=3.14151926;
	printf("请输入圆的半径r和圆柱的高h：\n");
	scanf("%f,%f",&r,&h);
	a=2*pi*r;
	b=r*r*pi;
	c=4*pi*r*r;
	d=3.0/4.0*pi*r*r*r;
	e=pi*r*r*h;
	printf("圆的周长：a=%6.2f\n",a);
	printf("圆的面积：b=%6.2f\n",b);
	printf("球的表面积：c=%6.2f\n",c);
	printf("球的体积：d=%6.2f\n",d);
	printf("圆柱的体积：e=%6.2f\n",e);
	return 0;
}
