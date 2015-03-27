#include<stdio.h>
#include<math.h>

int main()
{ double r5,r3,r2,r1,r0,p,p1,p2,p3,p4,p5;
  p=1000;
  r5=0.0585;
  r3=0.054;
  r2=0.0468;
  r1=0.0414;
  r0=0.0072;

  p1=p*(1+r5*5);              //一次存五年期
  p2=p*(1+2*r2)*(1+3*r3);     //先两年再三年
  p3=p*(1+3*r3)*(1+2*r2);     //先三年再两年
  p4=p*pow(1+r1,5);           //存五次一年期
  p5=p*pow(1+r0/4,20);        //活期存款

  printf("p1=%lf\n",p1);
  printf("p2=%lf\n",p2);
  printf("p3=%lf\n",p3);
  printf("p4=%lf\n",p4);
  printf("p5=%lf\n",p5);
  return 0;
}
