#include<stdio.h>
#include<math.h>
int main()
{
	float h,r,c,s,s1,v1,v2;
	double pi=3.1415926;
	scanf("h=%d r=%d",&h,&r);
	c=2*pi*r;
	s=pi*r*r;
	s1=4*pi*r*r;
	v1=4/3*pi*pow(r,3);
	v2=h*pi*r*r;
	printf("圆的周长为：c=%f",c);
	printf("圆的面积为：s=%f",s);
	printf("圆球表面积为：s1=%f",s1);
	printf("圆球体积为：v1=%f",v1);
	printf("圆柱体积为：v2=%f",v2);
	return 0
}
		
