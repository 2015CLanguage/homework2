#include<stdio.h>
#include<math.h>

int main()
{ double r,h,l,s,sq,vq,vz,pi=3.1415926;
  printf("请输入圆半径和圆柱高:");
  scanf("%lf%lf",&r,&h);
  l=2*pi*r;
  s=pi*r*r;
  sq=4*pi*r*r;
  vq=4/3*pi*r*r*r;
  vz=h*s;
  printf("圆周长为%6.2lf\n",l);
  printf("圆面积为%6.2lf\n",s);
  printf("圆球表面积为%6.2lf\n",sq);
  printf("圆球体积为%6.2lf\n",vq);
  printf("圆柱体积为%6.2lf\n",vz);
  return 0;
}
