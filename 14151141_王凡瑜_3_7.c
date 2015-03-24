#include<stdio.h>
#include<math.h>
#define pi 3.1415926
int main()
{
	float r,h;
	double cc,cs,bs,bv,cv;
	printf("请输入圆半径及圆柱高，用逗号隔开\n");
	scanf("%f,%f",&r,&h);

	cc=2*pi*r;
	cs=pi*pow(r,2);
	bs=4*pi*pow(r,2);
	bv=4/3.0*pi*pow(r,3);
	cv=cs*h;

	printf("圆周长为%.2f\n圆面积为%.2f\n圆球表面积为%.2f\n圆球体积为%.2f\n圆柱体积为%.2f\n",cc,cs,bs,bv,cv);

	return 0;
}
