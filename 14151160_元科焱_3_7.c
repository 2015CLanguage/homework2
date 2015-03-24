#include <stdio.h>
int main()
{
	float r,h,C,S,s,V,v;
	printf("请输入半径r，高h（如r=1 h=1），输入后按回车键\n");
	scanf("r=%f h=%f",&r,&h);
	C=2*3.14159*r;
	S=r*r*3.14159;
	s=4*3.14159*r*r;
	V=4/3*3.14159*r*r*r;
	v=h*3.14159*r*r;
	printf("圆周长=%.2f\n圆面积=%.2f\n圆球表面积=%.2f\n圆球体积=%.2f\n圆柱体积=%.2f\n",C,S,s,V,v);
	return 0;
}
