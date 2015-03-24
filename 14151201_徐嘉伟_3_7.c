#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,l,s,s1,v,v1;
	printf("输入半径r,圆柱高h:");
	scanf("%f,%f",&r,&h);
	l=2*3.14*r;
	s=3.14*r*r;
	s1=4*3.14*r*r;
	v=3/4*3.14*r*r*r;
	v1=3.14*r*r*h;
	printf("圆周长       l=%6.2f\n",l);
	printf("圆面积       s=%6.2f\n",s);
	printf("圆球表面积      s1=%6.2f\n",s1);
	printf("圆球体积       v=%6.2f\n",v);
	printf("圆柱体积       v1=%6.2f\n",v1);
	return 0;
}
