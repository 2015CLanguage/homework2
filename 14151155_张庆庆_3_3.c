Enter file contents here
#include"stdio.h"
#include"math.h"
int main()
{
double d,p,r,a,m;//定义各变量，均为double型
	d=300000,p=6000,r=0.01;//对各变量赋值
	a=p/(p-d*r);//计算a
    m=log(a)/log(1+r);//计算m
	printf("m=%.1f\n",m);//输出m的值
	return 0;
}
