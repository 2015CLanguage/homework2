#include <stdio.h>
#include <math.h>
void main()
{
	float a=1000;
	double case1,case2,case3,case4,case5;
	case1=a*(1+5*0.0585);
	case2=a*(1+2*0.0468)*(1+3*0.0540);
	case3=a*(1+3*0.0540)*(1+2*0.0468);
	case4=a*pow((1+0.0414),5);
	case5=a*pow((1+0.0072/4),4*5);
	printf("case1=%f\ncase2=%f\ncase3=%f\ncase4=%f\ncase5=%f\n",case1,case2,case3,case4,case5);
}
