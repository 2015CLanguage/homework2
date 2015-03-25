#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,d,s,S,v,V;
	scanf("r=%fh=%f",&r,&h);
#define PI 3.14159
	d=2*PI*r;
	s=PI*pow(r,2);
	S=4*PI*pow(r,2);
	v=(4/3)*PI*pow(r,3);
	V=h*PI*pow(r,2);
	printf("圆周长为%.2f\n",d);
	printf("圆面积为%.2f\n",s);
	printf("圆球表面积为%.2f\n",S);
	printf("圆球体积为%.2f\n",v);
	printf("圆柱体积为%.2f\n",V);
	return 0;
}
