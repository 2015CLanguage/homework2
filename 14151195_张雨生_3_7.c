#include<stdio.h>
int main()
{float r,h,l,s,sq,vq,vz;//定义字母。
 float pi=3.141526;//定义pi的值。
 printf("请输入圆的半径r,圆柱的高h:");//要求输入圆半径和圆柱高。
 scanf("%f,%f",&r,&h);
 l=2*r*pi;//计算周长。
 s=pi*r*r;
 sq=4*pi*r*r;
 vq=4/3*pi*r*r*r;
 vz=pi*r*r*h;
 printf("圆的周长是:l=%6.2f\n",l);//输出所要求的数值。
 printf("圆的面积是:s=%6.2f\n",s);
 printf("圆球的表面积是:sq=%6.2f\n",sq);
 printf("圆球的体积是:vq=%6.2f\n",vq);
 printf("圆柱的体积是:vz=%6.2f\n",vz);
 return 0;
}
