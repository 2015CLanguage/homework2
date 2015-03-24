#include <stdio.h>

int main()
{
	float a,b,c,d,e,h,r;
	float pi=3.14;
	scanf("h=%f r=%f",&h,&r);
	a=2*pi*r;
	b=pi*r*r;
	c=4*pi*r*r;
	d=(4*pi*r*r*r)/3;
	e=pi*r*r*h;
	printf("圆周长=%f\n圆面积=%f\n圆球表面积=%f\n圆球体积=%f\n圆柱体积=%f\n",a,b,c,d,e);
	return 0;
}
