#include <stdio.h>
#include <math.h>
int main()
{
	printf("请输入半径r高度h\n");
	float circumference, area, r, h, globe_area, globe_volume, column_volume, pi=3.14159; //定义圆周长，圆面积，半径，圆柱高，球表面积，球体积，柱体积,pi
	scanf("r=%f,h=%f",&r,&h);
	circumference = 2*pi*r;
	area = pi*r*r;
	globe_area = 4*area;
	globe_volume = area*4/3;
	column_volume = area*h;
	printf("circumference=%7.2f\narea=%7.2f\nglobe_area=%7.2f\nglobe_volume=%7.2f\ncolumn_volume=%7.2f\n",circumference,area,globe_area,globe_volume,column_volume);
	return 0;
}
