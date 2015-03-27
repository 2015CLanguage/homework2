#include<stdio.h>
#include<math.h>
int main()
{double d,p,r,m;
d=300000;//贷款数额
p=6000;//每月还款数额
r=0.01;//月利率
m=log(p/(p-d*r))/log(1+r);//还款月数计算公式
printf("m=%.1f\n",m);//输出还款月数
return 0;
}
