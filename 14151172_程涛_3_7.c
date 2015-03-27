#include <stdio.h>
#define pi 3.1415926
void main()
{
	double r,h,l,s,S,V,v;
	scanf("r=%lfh=%lf",&r,&h);
	l=2*pi*r;
    s=pi*r*r;
	S=4*pi*r*r;
	V=4.0/3*pi*r*r*r;
	v=2*pi*r*h+pi*r*r;
	printf("圆周长=%lf\n圆面积=%lf\n圆球表面积=%lf\n圆球体积=%lf\n圆柱体积=%lf\n",l,s,S,V,v);
}
