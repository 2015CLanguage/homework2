#include <stdio.h>
int main()
{	
	float h,r,a,b,c,d,e;
	printf("请输入圆柱高和圆半径（例如“h=1,r=1”），输入后请敲击回车");
	scanf("h=%f,r=%f",&h,&r);
	a=3.14*2*r;
	b=r*r*3.14;
	c=4*3.14*r*r;
	d=3.14*r*r*r*4/3;
	e=b*h;
	printf("圆周长%.2f\n圆面积%.2f\n球表面积%.2f\n球体积%.2f\n圆柱体体积%.2f\n",a,b,c,d,e);
}
