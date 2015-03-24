# include <stdio.h>

# include <math.h>

int main(void)
{
	double d,p,r,m;//定义所需变量
		//为变量赋值
		d=300000;
		p=6000;
		r=0.01;

		m=(log(p)-log(p-d*r))/log(1+r);//计算所需月数

		printf("所需还清的月数为：%.1lf月\n",m);//输出计算结果

	
	return 0;
}
