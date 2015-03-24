# include <stdio.h>
# include <math.h>
int main()
{
	double m,p,d,r;//定义变量
	d=300000;
	p=6000;
	r=0.01;//赋值
	m=log(p/(p-d*r))/log(1+r);//计算
	printf("月数=%.2f\n",m);//输出
	return 0;

}
