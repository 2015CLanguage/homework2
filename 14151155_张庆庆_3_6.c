Enter file contents here
#include"stdio.h"
int main()
{
 char c1='C',c2='h',c3='i',c4='n',c5='a';//定义三个字符变量并初始化
 c1=c1+4;//把（c1+4）的值赋给c1
 c2=c2+4;//把（c2+4）的值赋给c2
 c3=c3+4;//把（c3+4）的值赋给c3
 c4=c4+4;//把（c4+4）的值赋给c4
 c5=c5+4;//把（c5+4）的值赋给c5 
 putchar(c1);//向显示器输出字符c1
 putchar(c2);//向显示器输出字符c2
 putchar(c3);//向显示器输出字符c3
 putchar(c4);//向显示器输出字符c4
 putchar(c5);//向显示器输出字符c5
 putchar('\n');//向显示器输出一个换行符
 return 0;
}

