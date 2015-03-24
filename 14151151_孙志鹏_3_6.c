#include<stdio.h>
int main()
{	char c1,c2,c3,c4,c5,b1,b2,b3,b4,b5; 
	c1='C';
	c2='h';
	c3='i';
	c4='n';
	c5='a';
	b1=c1+4;
	b2=c2+4;							
	b3=c3+4;
	b4=c4+4;
	b5=c5+4;
	printf("用putchar函数输出加密后的字符串为：");
	putchar(b1);
	putchar(b2);
	putchar(b3);               
	putchar(b4);
	putchar(b5);
	putchar('\n');
	printf("用printf函数输出加密后的字符串为：%c%c%c%c%c\n",b1,b2,b3,b4,b5);          
	                        
	return 0;
}
