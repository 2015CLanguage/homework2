#include <stdio.h>
#include <math.h>
int main()
{
	float c1,c2,c3,c4,c5,p1,p2,p3,p4,p5;
	 c1=0.0414;
	 c2=0.0468;
	 c3=0.054;
	 c4=0.0585;
	 c5=0.0072;
	 p1=1000*(1+c4);
	 p2=1000*(1+c2*2)*(1+c3*3);
	 p3=1000*(1+c3*3)*(1+c2*2);
	 p4=1000*pow(1+c1,5);
	 p5=1000*pow(1+c5/4,20);
	 printf("p1=%.0f\np2=%.0f\np3=%.0f\np4=%.0f\np5=%.0f\n",p1,p2,p3,p4,p5);
	 return 0;
}
