#include <stdio.h>
int main()
{
           float r,h,c,s1,s2,v1,v2,pi;
           pi=3.14;
           printf("请输入r和h:");
           scanf("r=%f,h=&f",&r,&h);
           c=2*pi*r;
           s1=pi*r*r;
           s2=4*pi*r*r;
           v1=4/3*pi*r*r*r;
           v2=pi*r*r*h;
           printf("圆的周长为%.2f\n",c);
           printf("圆的面积为%.2f\n",s1);
           printf("圆球的表面积为%.2f\n",s2);
           printf("圆球的体积为%.2f\n",v1);
           printf("圆柱的体积为%.2f\n",v2);
           return 0;
}
