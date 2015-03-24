#include<stdio.h>

int main(void)
{
	char c1='C'+4;//给字符变量赋值并进行处理
	char c2='h'+4;
	char c3='i'+4;
	char c4='n'+4;
	char c5='a'+4;

	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);//使用printf进行输出

	putchar(c1);//使用putchar进行输出
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
		

	return 0;
}
