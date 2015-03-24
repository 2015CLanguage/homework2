#include<stdio.h>
int main()
{
	float pi=3.1415926,h,r,l,s,sq,vq,vz;
	printf("请输入圆半径r，圆柱高h（用逗号隔开）：");
	scanf("%f,%f",&r,&h); //用scanf函数接收r和h的数据输入
	l=2*pi*r; //列出圆周长、圆面积、球表面积、球体积、圆柱体积的计算式
	s=r*r*pi;
	sq=4*pi*r*r;
	vq=4.0/3.0*pi*r*r*r;
	vz=pi*r*r*h;
	printf("圆周长为：        %6.2f\n",l); //将计算结果逐一输出
	printf("圆面积为：        %6.2f\n",s);
	printf("圆球表面积为：    %6.2f\n",sq);
	printf("圆球体积为：      %6.2f\n",vq);
	printf("圆柱体积为：      %6.2f\n",vz);
	return 0;
}
