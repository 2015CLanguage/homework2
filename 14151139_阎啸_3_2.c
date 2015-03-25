#include <stdio.h>
#include <math.h>
int main()
{
         float r1,r2,r3,r4,r5,p1,p2,p3,p4,p5;
         r1=0.0414;
         r2=0.0468;
         r3=0.054;
         r4=0.0585;
         r5=0.0072;
         p1=1000*(1+5*r4);
         p2=1000*(1+2*r2)*(1+3*r3);
         p3=1000*(1+3*r3)*(1+2*r2);
         p4=1000*pow((1+r1),5);
         p5=1000*pow((1+r5/4),20);
         printf("第1种存法的本息和是%f\n",p1);
         printf("第2种存法的本息和是%f\n",p2);
         printf("第3种存法的本息和是%f\n",p3);
         printf("第4种存法的本息和是%f\n",p4);
         printf("第5种存法的本息和是%f\n",p5);
         return 0;
}
