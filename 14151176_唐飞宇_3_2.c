#include <stdio.h>
#include <math.h>
int main()
{
  float p1,p2,p3,p4,p5;
  p1=1000*(1+5*0.0585);
	p2=(1000*(1+2*0.0468))*(1+3*0.054);
	p3=(1000*(1+3*0.054))*(1+2*0.0468);
	p4=1000*pow(1+0.0414,5);
	p5=1000*pow(1+0.25*0.0072,4*5);
	printf("p1=%.2f\n",p1);
	printf("p2=%.2f\n",p2);
	printf("p3=%.2f\n",p3);
	printf("p4=%.2f\n",p4);
	printf("p5=%.2f\n",p5);
  return 0;
}
