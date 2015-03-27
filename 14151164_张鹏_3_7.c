#include <stdio.h>
int main ()
{
 float pi=3.1415926,c,s,a,b,v,r,h;
 scanf("%f,%f",&r,&h);
 c=2*pi*r;
 s=pi*r*r;
 a=4*pi*r*r;
 b=(float)3/4*pi*r*r*r;
 v=pi*r*r*h;
 printf("圆周长=%6.2f\n圆面积=%6.2f\n圆球表面积=%6.2f\n圆球体积=%6.2f\n圆柱体积=%6.2f\n",c,s,a,b,v);
 return 0;
}
