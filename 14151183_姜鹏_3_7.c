#include <stdio.h>
#include <math.h>
int main()
{float r,h,C,S,B,V,v;
 float p=3.14;
 printf("请输入圆的半径r与圆柱的高h:\n");
 scanf("%f%f",&r,&h);
 C=2*p*r;
 S=p*r*r;
 B=4*p*r*r;
 V=4/3*p*r*r*r;
 v=S*h;
 printf("圆的周长=%6.2f\n",C);
 printf("圆的面积=%6.2f\n",S);
 printf("圆球表面积=%6.2f\n",B);
 printf("圆球体积=%6.2f\n",V);
 printf("圆柱体积=%6.2f\n",v);
 return 0;
}
