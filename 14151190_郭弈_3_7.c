#include <stdio.h>
#include <math.h> 
int main()
{
	  float r,h,C,s,S,v,V;
	  const float pi=3.1415926;
    scanf("r=%f,h=%f",&r,&h);
    C=2*pi*r;
    s=pi*pow(r,2);
    S=4*pi*pow(r,2);
    v=4/3*pi*pow(r,3);
    V=pi*pow(r,2)*h;
    printf("圆周长为%1.2f,圆面积为%1.2f,圆球表面积为%1.2f,圆球体积为%1.2f,圆柱体积为%1.2f",C,s,S,v,V);
	  return 0;
}
