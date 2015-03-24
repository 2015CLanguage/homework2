Enter file contents here
r=1.5,h=3,pi=3.1415926;
#include"stdio.h"
#include"math.h"
int main()
{
double r,h,pi,a,b,c,d,e;//定义各变量为double型
scanf("%lf%lf%lf",&r,&h,&pi);//要求输入圆半径r和圆柱高h
 a=2*pi*r;//计算圆周长
 b=pi*pow(r,2);//计算圆面积
 c=4*pi*pow(r,2);//计算圆球表面积
 d=4/3*pi*pow(r,3);//计算圆球体积
 e=h*pi*pow(r,2);//计算圆柱体积
 printf ("a(圆周长)=%.2f\nb(圆面积)=%.2f\nc(圆球表面积)=%.2f\nd(圆球体积)=%.2f\ne(圆柱体积)=%.2f\n",a,b,c,d,e);//输出圆周长，圆面积，圆球表面积，圆球体积，圆柱体积
 return 0;
}
