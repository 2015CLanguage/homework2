#include "stdio.h"
int main()
{
	float h,r,l,s1,s2,v1,v2;
	float pi=3.141592;
	printf("请分别输入圆的半径r和圆柱的高h：");
	scanf("%f%f",&r,&h);
	l=2*pi*r;
  s1=pi*r*r;
  s2=4*pi*r*r;
  v1=(4.0/3.0)*pi*r*r*r;
  v2=pi*r*r*h;
  
  printf("圆周长为：%6.2f\n",l);
  printf("圆面积为：%6.2f\n",s1);
  printf("球表面积为：%6.2f\n",s2);
  printf("球体积为：%6.2f\n",v1);
  printf("圆柱体积为：%6.2f\n",v2);
  return 0;
} 
