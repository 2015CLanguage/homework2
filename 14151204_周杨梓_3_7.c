#include<stdio.h>
#include<math.h>
int main()
{double r,h,c,s,S,v,V;
 double pi=3.1415926;
 printf("请依次输入圆半径r,圆柱高h:");
 scanf("%lf,%lf",&r,&h);
 c=2*pi*r;
 s=pi*pow(r,2);
 S=4*pi*pow(r,2);
 v=3.0/4*pi*pow(r,3);
 V=s*h;
 printf("圆周长为:c=%6.2f\n",c);
 printf("圆面积为:s=%6.2f\n",s);
 printf("圆球表面积为:S=%6.2f\n",S);
 printf("圆球体积为:v=%6.2f\n",v);
 printf("圆柱体积为:V=%6.2f\n",V);
 return 0;
}
