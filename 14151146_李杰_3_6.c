#include <stdio.h>
int main()
{
	char c1,c2,c3,c4,c5,C1,C2,C3,C4,C5;
	c1='C'; c2='h'; c3='i'; c4='n'; c5='a';
	C1=c1+4; C2=c2+4; C3=c3+4; C4=c4+4; C5=c5+4;
	printf("用putchar输出为");
	putchar(C1);
	putchar(C2);
	putchar(C3);
	putchar(C4);
	putchar(C5);
	putchar('\n');
	printf("用printf输出为");
	printf("%c%c%c%c%c\n",C1,C2,C3,C4,C5);
	return 0;
}
