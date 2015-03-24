#include<stdio.h>
#include<math.h>
int main()
{
	float d=300000,p=6000,r=0.01,m,a,b;
	a=log10(p/(p-d*r)); //为方便计算，先将m的两个计算部分进行分别计算
	b=log10(1+r);	
	m=a/b; //计算m的值
	printf("还清贷款需要的月份数：%6.1f\n",m);
	return 0;
}
