#include<stdio.h>

void main()
{
	char a, b, c, d, e;
	printf("请输入: ");
	//输入字符,得到字符ASCII码
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();
	printf("结果为: ");
	//将字符ASCII码加4输出
	putchar (a + 4);
	putchar (b + 4);
	putchar (c + 4);
	putchar (d + 4);
	putchar (e + 4);
	putchar ('\n');
}
