# include <stdio.h>
# include <math.h>
int main()
{
	float r,h,c,s1,s2,v1,v2;
	float pi=3.141526;//定义变量 
	printf("请输入圆的半径和高:");
	scanf("%f,%f",&r,&h); //输入变量 
	c=2*pi*r;//计算圆的周长 
	s1=pi*r*r;//计算圆的面积 
	s2=4*pi*r*r;//计算球的表面积 
	v1=pi*r*r*h;//计算圆柱的体积 
	v2=(4/3)*pi*r*r*r;//计算球的体积 
	printf("圆的周长为:%.2f\n",c);
	printf("圆的面积为:%.2f\n",s1);
	printf("圆柱的表面积为:%.2f\n",s2);
	printf("圆柱的体积为:%.2f\n",v1);
	printf("球的体积为:%.2f\n",v2);//输出 
	return 0;
 } 
