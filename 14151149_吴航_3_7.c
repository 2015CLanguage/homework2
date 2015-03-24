#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d,e,r,h,pi;
	pi=3.1415926;
	printf('输入半径r,输入高h');
	scanf('r=%f,h=%f,'&r,&h);
	a=2*pi*r;
	b=pi*r*r;
	c=4*pi*r*r;
	d=4*pi*r*r*r/3;
	e=a*h;
	printf('圆周长为：%6.2f\n',a);
	printf('圆面积为：%6.2f\n',b);
	printf('圆球表面积为：%6.2f\n',c);
	printf('圆球体积为：%6.2f\n',d);
	printf('圆柱体积为：%6.2f\n',e);
	return 0;
}
