#include<stdio.h>
#include<math.h>
int main()
{float a5,a3,a2,a1,a0,p,p1,p2,p3,p4,p5;
 p=1000;
 a5=0.0585;
 a3=0.054;
 a2=0.0468;
 a1=0.0414;
 a0=0.0072;
 


 p=p*((1+a5)*5);
 p2=p*(1+2*a2)*(1+3*a3);
 p3=p*(1+3*a3)*(1+2*a2);
 p4=p*pow(1+a1,5);
 p5=p*pow(1+a0/4,4*5);
 printf("p1=%f\n",p1);
 printf("p2=%f\n",p2);
 printf("p3=%f\n",p3);
 printf("p4=%f\n",p4);
 printf("p5=%f\n",p5);
 return 0;
}
