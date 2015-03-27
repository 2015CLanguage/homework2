#include<stdio.h>
#include<math.h>
int main()
{
	float r1,r2,r3,r5,r,p0,p,p1,p2,p3,p5;
	p=1000;
	r1=0.0414;
	r2=0.0468;
	r3=0.054;
	r5=0.0585;
	r=0.0072;

	p1=p*pow(1+r1,5);                    
	p2=1000*(1+2*r2)*(1+3*r3);         
	p3=1000*(1+3*r3)*(1+2*r2); 
	p5=1000*(1+5*r5);                 
	p0=1000*pow(1+r/4,4*5);           
	printf("p1=%f\np2=%f\np3=%f\np5=%f\np0=%f\n",p1,p2,p3,p5,p0);    
	return 0;
}
