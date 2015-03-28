Enter file contents here
#include<stdio.h>
int main()
{
double r=1.5,h=3,a,b,c,d,e,P=3.1415926;
a=2*r*P;
b=P*r*r;
c=4*P*r*r;
d=4/3*P*r*r*r;
e=b*h;
printf("圆周长=%.2f\n圆的体积=%.2f\n球的表面积=%.2f\n球体积=%.2f\n圆柱体积=%.2f\n",a,b,c,d,e);
return 0; 
}
