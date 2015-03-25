#include <stdio.h>
#include <math.h>
int main()
{
	float d,p,r,m;
	printf("请输入借款d每月还款额p月利率r\n");
	scanf("d=%f,p=%f,r=%f",&d,&p,&r);
	m=log(p/(p-d*r))/log(1+r);
	printf("需要%5.1f月能还清\n",m);
	return 0;
}
