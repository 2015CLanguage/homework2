#include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5, d1, d2, d3, d4, d5;
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();
	d1 = c1 + 4;
	d2 = c2 + 4;
	d3 = c3 + 4;
	d4 = c4 + 4;
	d5 = c5 + 4;
	putchar(d1);     //如果用'printf'语句输出则为：
	putchar(d2);     //printf("%c%c%c%c%c\n", d1, d2, d3, d4, d5);
	putchar(d3);     //return 0;
	putchar(d4);
	putchar(d5);
	putchar('\n');
	return 0;
}
