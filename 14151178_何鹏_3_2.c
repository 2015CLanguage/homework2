#include<stdio.h>                                  //编译预处理
#include<math.h>
int main()                                         //定义主函数
{                                                  //函数开始
   float p,r1, r2,r3,r4,r5,p1,p2,p3,p4,p5;         //定义float变量
   p=1000;                                         //变量赋值
   r1=0.0414;
   r2=0.0468;
   r3=0.054;
   r4=0.0585;
   r5=0.0072;
   p1=p*(1+r4);                                     //函数计算
   p2=p*(1+r2)*(1+r3);
   p3=p*(1+r3)*(1+r2);
   p4=p*pow((1+r1),5);
   p5=p*pow((1+r5),20);
   printf("p1=%6.2f\n",p1);                         //输出结果
   printf("p2=%6.2f\n",p2);
   printf("p3=%6.2f\n",p3);
   printf("p4=%6.2f\n",p4);
   printf("p5=%6.2f\n",p5);
   return 0;                                        //使函数返回值为0
    }                                               //函数结束
