#include <stdio.h>

int main(void)
{
	double r,h,c,s1,s2,v1,v2,pi;//定义定义所需变量

		pi=3.14;//给变量赋值

		printf("请输入圆半径与圆柱的高：\n");//输入提示语
	
		scanf("%lf %lf",&r,&h);//用户输入变量的值
//以下代码是进行计算
		c=2*pi*r;
		s1=pi*r*r;
		s2=4*pi*r*r;
		v1=4.0/3.0*pi*r*r*r;
		v2=s1*h;
//以下代码是输出所要计算的值
		printf("圆周长为：%.2lf\n",c);
		printf("圆面积为：%.2lf\n",s1);
		printf("圆球表面积为：%.2lf\n",s2);
		printf("圆球体积为：%.2lf\n",v1);
		printf("圆柱体积为：%.2lf\n",v2);
		

	return 0;
}
