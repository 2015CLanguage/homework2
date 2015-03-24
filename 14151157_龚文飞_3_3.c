#include"stdio.h"
#include"math.h"
void main()
{
	float d = 300000, p = 6000, r = 0.01, a, m;   //定义各变量，并对d,p,r进行赋值
	a = p / (p - d*r);
	m = log(a) / log(1 + r);                  //计算还清月数
	printf("还清月数m=%.1f\n", m);               //输出还清月数的值
}
