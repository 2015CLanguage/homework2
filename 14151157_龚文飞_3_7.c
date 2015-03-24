#include"stdio.h"
#include"math.h"
void main()
{
    float r,h,l,s,a,b,c,Pi;
	Pi=3.1415926;
	scanf("%f%f",&r,&h);
    l=2*Pi*r;
	s=Pi*pow(r,2);
	a=4*Pi*pow(r,2);
	b=4/3*Pi*pow(r,3);
	c=Pi*pow(r,2)*h;
    printf("圆周长=%.2f\n",l);
     printf("圆面积=%.2f\n",s);
	  printf("圆球表面积=%.2f\n",a);
	   printf("圆球体积=%.2f\n",b);
	    printf("圆柱体体积=%.2f\n",c);
}
