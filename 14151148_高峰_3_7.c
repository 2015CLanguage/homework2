#include"stdio.h"
#define PI 3.1416
void main()
{
	float r,l,s,S,V1,V2;
	int h;
	scanf("r=%f,h=%d",&r,&h);
	l=PI*2*r;
	s=PI*r*r;
	S=2*PI*r*r;
	V1=4/3*PI*r*r*r;
	V2=s*h;
	printf("圆周长=%.2f\n",l);
	printf("圆面积=%.2f\n",s);
	printf("圆球表面积=%.2f\n",S);
	printf("圆球体积=%.2f\n",V1);
	printf("圆柱体体积=%.2f\n",V2);

}
