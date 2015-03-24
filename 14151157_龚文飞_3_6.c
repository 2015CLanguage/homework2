#include"stdio.h"
void main()
{
	char c1, c2, c3, c4, c5;
	c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
	c1 = c1 + 4, c2 = c2 + 4, c3 = c3 + 4, c4 = c4 + 4, c5 = c5 + 4;
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');      //使用putchar函数输出五个字符

	printf("%\c%\c%\c%\c%\c\n", c1, c2, c3, c4, c5);   //使用printf函数输出五个字符
}

