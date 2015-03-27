#include"stdio.h"
#include"math.h"
void main()
{
	float r,h,l,s1,s2,v1,v2,pi=3.1416;
	scanf("%d,%d",&r,&h);
	l=2*pi*r;
	s1=pi*r*r;
	s2=4*pi*r*r;
	v1=pi*r*r*r*4/3;
	v2=pi*r*r*h;
	printf("圆周长%7.2f,圆面积%7.2f圆球表面积%7.2f圆球体积%7.2f圆柱体积%7.2f",l,s1,s2,v1,v2);
}
