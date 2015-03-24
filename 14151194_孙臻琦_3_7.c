#include<stdio.h>
#include<math.h>
int main()
{
  float r,h,c,s,sq,vq,v,pi=3.141592653;
	printf("请输入圆的半径r和圆柱高h,按回车键结束\n");
	scanf("%f %f",&r,&h);
  c=pi*r*2;
	s=pi*r*r;
	sq=4*pi*r*r;
	vq=4.0/3*pi*pow(r,3);
	v=pi*r*r*h;
	printf("圆的周长c为%.2f\n圆的面积s为%.2f\n圆球表面积sq为%.2f\n圆球体积vq为%.2f\n圆柱体积v为%.2f\n",c,s,sq,vq,v);
	return 0;
}
