#include <stdio.h>
int main ()
{
	float r,h,l,s,sq,vq,vz,pi=3.141592;
	printf("请输入圆半径r，圆柱高h:");
	scanf("%f,%f",&r,&h);
	l=2*pi*r;
	s=r*r*pi;
	sq=4*pi*r*r;
	vq=4.0/3.0*pi*r*r*r;
	vz=pi*r*r*h;
	printf("圆周长为: l=%.2f\n",l);
	printf("圆面积为:  s=%.2f\n",s);
	printf("圆球表面积为:  sq=%.2f\n",sq);
	printf("圆球体积为:  vq=%.2f\n",vq);
	printf("圆柱体积为:  vz=%.2f\n",vz);
	return 0;
}
