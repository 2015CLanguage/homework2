#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5; //声明5个字符，对其赋值后并转换
	c1='C',c2='h',c3='i',c4='n',c5='a';
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	putchar('p');  //使用putchar函数输出
	putchar('a');
	putchar('s');
	putchar('s');
	putchar('w');
	putchar('o');
	putchar('r');
	putchar('d');
	putchar(' ');
	putchar('i');
	putchar('s');
	putchar(' ');
	putchar(c1);  
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
	printf("密码是 %c%c%c%c%c\n",c1,c2,c3,c4,c5);  //使用printf函数输出
}
