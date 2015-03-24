#include<stdio.h>
#include<math.h>
int main()
{
    double r1,r2,r3,r5,r0,p5,p23,p32,p15,p0;
    
    r1=0.0414;
    r2=0.0468;
    r3=0.054;
    r5=0.0585;
    r0=0.0072;
    
    p5=1000*(1+5*r5);
    printf("五年期本息和：%f\n",p5);
    
    p23=1000*(1+2*r2)*(1+3*r3);
    printf("先2年再3年本息和：%f\n",p23);
    
    p32=1000*(1+3*r3)*(1+2*r2);
    printf("先3年再2年本息和：%f\n",p32);
    
    p15=1000*pow(1+r1,5);
    printf("存1年连存5次本息和：%f\n",p15);
    
    p0=1000*pow(1+r0/4,4*5);
    printf("活期本息和：%f\n",p0);
    
	return 0;
}     
