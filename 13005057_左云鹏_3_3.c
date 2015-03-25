#include<stdio.h>
#include<math.h>
int main()
{float d,p,r,m;                  //定义数据类型并赋值
d=300000;
p=6000;
r=0.01;

m=log(p/(p-d*r))/log(1+r);       //计算操作

printf("还清的月份为:%6.1f\n",m);//输出结果

return 0;                        //检验程序完成

}
