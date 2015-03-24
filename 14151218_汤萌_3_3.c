#include<stdio.h>
#include<math.h>

void main()
{
	float d = 300000.0f, p = 6000.0f, r = 0.01, m; //定义变量
	m = log(p / (p - d * r)) / log(1 + r); //调用math.h中的函数运算
	printf("还清需要%.1f月\n", m);
}
