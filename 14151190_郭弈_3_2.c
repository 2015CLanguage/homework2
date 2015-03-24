#include <stdio.h>
#include <math.h>
int main()
{   
  double X,r1,r2,r3,r4,r5;
	X=1000;
	r1=0.0441;
	r2=0.0468;
	r3=0.054;
	r4=0.0585;
	r5=0.0072;
	printf("p1=%f\n",X*(1+5*r4));
  printf("p2=%f\n",(X*(1+2*r2))*(1+3*r3));
  printf("p3=%f\n",(X*(1+3*r3))*(1+2*r2));
  printf("p4=%f\n",X*pow((1+r1),5));
  printf("p5=%f\n",X*pow((1+r5/4),20));
  return 0;
}
