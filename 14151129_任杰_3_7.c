#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float r, h, c, s1, s2, v1, v2;
	scanf_s("%f%f", &r, &h);
	c = 2 * pi*r;
	s1 = pi*r*r;
	s2 = 4*pi*r*r;
	v1 = 4 * pi*r*r*r / 3;
	v2 = pi*r*r*h;
	printf("圆周长，圆面积，圆球表面积，圆球体积，圆柱体积分别为%.2f,%.2f,%.2f,%.2f,%.2f\n", c, s1, s2, v1, v2);
}
