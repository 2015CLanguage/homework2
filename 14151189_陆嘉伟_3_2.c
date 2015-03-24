#include<stdio.h>
#include<math.h>
int main()
{double p0,p1,p2,p3,p4,p5,r1,r2,r3,r4,r5;
p0=1000;
r1=0.0414;
r2=0.0468;
r3=0.054;
r4=0.0585;
r5=0.0072;
p1=p0*(1+5*r4);
p2=p0*(1+2*r2)*(1+3*r3);
p3=p0*(1+3*r3)*(1+2*r2);
p4=p0*pow(1+r1,5);
p5=p0*pow(1+r5/4,20);
printf("第一种:%f\n第二种:%f\n第三种%f\n第四种:%f\n第五种：%f\n",p1,p2,p3,p4,p5);
return 0;
}
