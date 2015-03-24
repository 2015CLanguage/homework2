#include<stdio.h>

void main()
{
	float Pi = 3.14159f;
	float r = 0.0f, h = 0.0f;
	
	printf("请输入圆的半径: ");//输入圆的半径和高
	scanf("%f", &r);
	printf("请输入圆柱的高: ");
	scanf("%f", &h);
	//对输入数据根据不同图形的计算公式运算输出
	printf("圆的周长为: %.2f\n", Pi * 2 * r);
	printf("圆的面积为: %.2f\n", Pi * r * r);
	printf("圆柱的表面积为: %.2f\n", 2*Pi*r*h + 2*Pi*r*r);
	printf("球的体积为: %.2f\n", 4/3*Pi*r*r*r);
	printf("圆柱的体积为: %.2f\n", Pi*r*r*h);
}
