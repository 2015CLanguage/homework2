#include<stdio.h>
int main()
{
float pi,r,h,l,s1,s2,v1,v2;
pi=3.14;
printf("请输入半径：");
scanf("%f",&r);
printf("请输入高：");
scanf("%f",&h);
l=2*pi*r;
s1=pi*r*r;
s2=4*pi*r*r;
v1=4*pi*r*r*r/3;
v2=s1*h;
printf("圆周长为：%4.2f\n",l);
printf("圆面积为：%4.2f\n",s1);
printf("圆球表面积为：%4.2f\n",s2);
printf("圆球体积为：%4.2f\n",v1);
printf("圆柱体积为：%4.2f\n",v2);
return 0;
}
