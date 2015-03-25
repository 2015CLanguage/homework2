#include <stdio.h>
int main()
{ double r,h,c,s1,s2,v1,v2;
printf("请输入圆的半径，圆柱高度");
scanf("%lf,%lf",&r,&h) ;
c=2*3.14*r;
s1=3.14*r*r;
s2=3.14*4*r*r;
v1=4*3.14*r*r*r/3;
v2=3.14*r*r*h;
printf("圆的周长为%6.2f\n",c); 
printf("圆的面积为%6.2f\n",s1); 
printf("圆球的表面积为%6.2f\n",s2); 
printf("圆球的体积为%6.2f\n",v1); 
printf("圆柱的体积为%6.2f\n",v2); 
return 0;
