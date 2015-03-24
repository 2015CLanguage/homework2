#include <stdio.h>
#include <math.h>
int main()
{
	float P1,P2,P3,P4,P5,a,b;
	P1=1000*(1+5*0.0585);
	P2=1000*(1+2*0.0468)*(1+3*0.054);
	P3=1000*(1+3*0.054)*(1+2*0.0468);
	a=pow((1+0.0414),5);
	P4=1000*a;
	b=pow((1+0.0072/4),20);
	P5=1000*b;
	printf("P1=%f\nP2=%f\nP3=%f\nP4=%f\nP5=%f\n",P1,P2,P3,P4,P5);
	return 0;
}

