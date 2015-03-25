#include <stdio.h>
#include <math.h>
int main() 
{
         float p1,p2,p3,p4,p5,r1,r2,r3,r5,r,n,a,b;
         r1=0.0414;
         r2=0.0468;
         r3=0.054;
         r5=0.0585;
         r=0.0072;
         
         a=1000*(1+2*r2);
         b=1000*(1+3*r3);
         
         p1=1000*(1+5*r1);
         p2=a*(1+3*r3);
         
         p3=b*(1+2*r2);
         
         p4=1000*pow(1+r1,5);
         p5=1000*pow(1+r/4.0,20);
         printf("p1=%.2f\np2=%.2f\np3=%.2f\np4=%.2f\np5=%.2f\n",p1,p2,p3,p4,p5);
         return 0;

	
}
