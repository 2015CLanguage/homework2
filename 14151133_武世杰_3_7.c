#include<stdio.h>
int main()
{
	float h, r, c, s, s1, v1, v2;
	float pi = 3.141592653;
	printf("请输入圆半径r，圆柱高h:");
	scanf("%f,%f", &r, &h);
	c = 2 * pi*r;//计算圆周长
	s = r*r*pi;//计算圆面积
	s1 = 4 * pi*r*r;//计算圆球表面积
	v1 = 3.0 / 4.0*pi*r*r*r;//计算圆球体积
	v2 = pi*r*r*h;//计算圆柱体积
	printf("圆周长为：c=%6.2f\n",c);
	printf("圆面积为：c=%6.2f\n",s);
	printf("圆球表面积为：c=%6.2f\n",s1);
	printf("圆球体积为：c=%6.2f\n",v1);
	printf("圆柱体积为：c=%6.2f\n",v2);
	return 0;
}
