#include <stdio.h>
#include <math.h>
void main()
{
	float a=1000;
	double e,f,g,h,i;
	e=a*(1+5*0.0585);
  f=a*(1+2*0.0468)*(1+3*0.0540);
	g=a*(1+3*0.0540)*(1+2*0.0468);
	h=a*pow((1+0.0414),5);
  i=a*pow((1+0.0072/4),4*5);
	printf("e=%f\nf=%f\ng=%f\nh=%f\ni=%f\n",e,f,g,h,i);
}
