Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{
double p0=1000,p1,p2,p3,p4,p5,r=0.0072,r1=0.0414,r2=0.0468,r3=0.054,r5=0.058;
p1=p0*(1+5*r5) ;
p2=(p0*(1+2*r2))*(1+3*r3);
p3=(p0*(1+3*r3))*(1+2*r2);
p4=p0*((pow(double(1+r1),5)));
p5=p0*((pow(double(1+r),20)));
printf("法一本息和=%f\n法二本息和=%f\n法三本息和=%f\n法四本息和=%f\n法五本息和=%f\n",p1,p2,p3,p4,p5);
return 0;
 } 
