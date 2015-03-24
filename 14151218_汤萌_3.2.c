#include<stdio.h>
#include<math.h>

void main ()
{
	//定义变量
	float interest_1 = 0.0414f, interest_2 = 0.0468f, interest_3 = 0.054f, interest_5 = 0.0585f, interest_current = 0.0072f;
	float moneny = 1000.0f, year = 5.0f;
	//运算输出
	printf("一次存五年期的最终本息和为：%.4f\n", 1000 * (1 + 5 * interest_5));
	printf("先存2年期，到期后将本息再存2年期的最终本息和为：%.4f\n", (1000 * (1 + 2 * interest_2)) * (1 + 3 * interest_3));
	printf("先存3年期, 后将本息再存2年的最终本息和为：%.4f\n", (1000 * (1 + 3 * interest_3)) * (1 + 2 * interest_2));
	printf("先存1年期, 到期后将本息再存1年期,连续存5次最终本息和为:%.4f\n", 1000 * pow(1 + interest_1, 5));
	printf("存活期存款, 最终本息和为: %.4f\n", 1000 * pow(interest_current / 4 + 1, 20));
}
