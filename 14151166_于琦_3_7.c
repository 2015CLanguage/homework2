#include <stdio.h>
#include <math.h>
int main()
{
    float r,h,c,s1,s2,V1,V2;
	printf("请输入圆半径r:");
	scanf("%f",&r);
	printf("请输入圆柱高h:");
	scanf("%f",&h);
	float pi=3.1415926;
	c=2*pi*r;
	s1=pi*r*r;
	s2=4*pi*r*r;
	V1=(float)4/3*pi*r*r*r;
	V2=s1*h;
	printf("圆周长=%.2f\n",c);
	printf("圆面积=%.2f\n",s1);
	printf("圆球表面积=%.2f\n",s2);
	printf("圆球体积=%.2f\n",V1);
	printf("圆柱体积=%.2f\n",V2);
	return 0;
}
