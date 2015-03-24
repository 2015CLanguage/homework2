#include<stdio.h>
#include<math.h>
#define pi 3.1415926
int main()                     
{
	float r, h,l,s1,s2,v1,v2;
	printf("请输入圆半径：");            
	scanf("%f",&r);
	printf("请输入圆柱高：");
	scanf("%f",&h);
	l=2*pi*r;
	s1=pi*pow(r,2);
	s2=4*pi*pow(r,2);
	v1=(4.0/3.0)*pi*pow(r,3);
	v2=s1*h;
	printf("圆周长：%6.2f\n",l);
	printf("圆面积：%6.2f\n",s1);
	printf("球表面积：%6.2f\n",s2);
	printf("球体积：%6.2f\n",v1);
	printf("圆柱体积：%6.2f\n",v2);
	return 0;
}
