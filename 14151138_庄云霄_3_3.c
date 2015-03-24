#include "stdio.h"						
#include "math.h"
int main()
{
	float d=300000,p=6000,r=0.01,m;   //定义一些变量
	m=log10(p/(p-d*r))/log10(1+r);    //计算月份数m
	printf("需要月份数为m=%5.1f\n",m);
	return 0;	
}
