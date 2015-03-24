#include"stdio.h"
#include"math.h"
int main()
{
    float p1,p2,p3,p4,p5;
    p1=1000*(1+5*0.0585);
    p2=1000*(1+2*0.0468)*(1+3*0.054);
    p3=1000*(1+3*0.054)*(1+2*0.0468);
    p4=1000*pow((1+0.0414),5);
    p5=1000*pow((1+0.0072/4),4*5);
    printf("一次存5年：%f\n",p1);
    printf("先存2年再存3年：%f\n",p2);
    printf("先存3年再存2年：%f\n",p3);
    printf("连续存5次1年：%f\n",p4);
    printf("活期存5年：%f\n",p5);
    return 0;
}
