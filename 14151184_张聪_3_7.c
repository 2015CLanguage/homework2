#include<stdio.h>
#include<math.h>

int main()
{
double r,h,c,s,sq,vq,vz,pi=3.1415926;
printf("输入半径和高:");
scanf("%lf%lf",&r,&h);
c=2*pi*r;
s=pi*r*r;
sq=4*pi*r*r;
vq=4/3*pi*r*r*r;
vz=s*h;
printf("圆的周长是:%6.2lf",c);
printf("圆的面积是:%6.2lf",s);
printf("球的表面积是:%6.2lf",sq);
printf("球的体积是:%6.2lf",vq);
printf("圆柱的体积是:%6.2lf",vz);
return 0;
}
