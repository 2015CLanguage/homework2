#include<stdio.h>
#include<math.h>
int main()
{float r1,r2,r3,r5,r0,p,s1,s2,s3,s4,s5;
 p=1000;
 r1=0.0414;
 r2=0.0468;
 r3=0.0540;
 r5=0.0585;
 r0=0.0072;
 s1=p*(1+5*r5);
 s2=p*(1+2*r2)*(1+3*r3);
 s3=p*(1+3*r3)*(1+2*r2);
 s4=p*pow(1+r1,5);
 s5=p*pow(1+r0/4,20);
 printf("s1=%f,s2=%f,s3=%f,s4=%f,s5=%f\n",s1,s2,s3,s4,s5);
 return 0;
}
