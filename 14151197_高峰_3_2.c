#include <stdio.h> 
#include <math.h>
int main(){
	float p1,p2,p3,p4,p5,r1,r2,r3,r5,r0,n,a;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	r0=0.0072;
	p1=1000*(1+5*r1);
	a=1000*(1+2*r2);
	p2=a*(1+3*r3);
	a=1000*(1+3*r3);
	p3=a*(1+2*r2);
	p4=1000*pow(1+r1,5);
	p5=1000*pow(1+r0/4.0,20);
	printf("p1=%.0f\np2=%.0f\np3=%.0f\np4=%.0f\np5=%.0f\n",p1,p2,p3,p4,p5);
	return 0;
