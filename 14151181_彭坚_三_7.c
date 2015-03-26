#include<stdio.h>
#include<math.h>
int main()
{
	float r, h;
	double  pi, c, s, d, m, v;
	printf("请在下方输入半径和高，例‘r= ，h= ’\n");
	scanf_s("r=%f,h=%f", &r, &h);
	pi = 3.14;
	c = 2 * pi*r;
	s = pi*r*r;
	d = 4 * pi*r*r;
	m = (4/3) *r*r*r*pi;
	v = s*h;
	printf("圆周长为%.2f\n圆面积为%.2f\n圆球表面积为%.2f\n圆球体积为%.2f\n圆柱体体积为%.2f\n",c,s,d,m,v);
	return 0;
}
