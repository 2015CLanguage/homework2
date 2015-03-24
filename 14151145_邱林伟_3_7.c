#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	float r,h,c,s1,s2,V1,V2;
	printf("请输入半径r：");
	scanf("%f",&r);                                  //输入圆的半径
	printf("请输入圆柱高h:");
	scanf("%f",&h);                                  //输入圆柱的高
	c=2*PI*r;                                        //计算圆周长
	s1=PI*r*r;                                       //计算圆面积
	s2=4*s1;                                         //计算圆球表面积
	V1=4.0*PI*pow(r,3)/3.0;                          //计算圆球体积
	V2=s1*h;                                         //计算圆柱体积
	printf("圆周长为：%6.2f\n圆面积为：%6.2f\n圆球表面积为：%6.2f\n圆球体积为：%6.2f\n圆柱体积为：%6.2f\n",c,s1,s2,V1,V2);//输出数据并取小数点后两位
	return 0;
}
