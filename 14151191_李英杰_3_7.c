#include<stdio.h>
#include<math.h>
int main()
{
    float r,h,c,s,s2,v,v2,pi=3.141592653;
	printf("请输入圆的半径r和圆柱高h\n");
	scanf("%f %f",&r,&h);
    c=pi*r*2;
	s=pi*r*r;
	s2=4*pi*r*r;
	v=4.0/3*pi*pow(r,3);
	v2=pi*r*r*h;
	printf("圆的周长c为%.2f\n圆的面积s为%.2f\n圆球表面积s2为%.2f\n圆球体积v为%.2f\n圆柱体积v2为%.2f\n",c,s,s2,v,v2);
	return 0;
}
