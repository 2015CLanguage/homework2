#include<stdio.h>     
int main()              
{                       
	char c1='C',c2='h',c3='i',c4='n',c5='a';//定义变量类型为字符，并赋值
	c1=c1+4;                                //运算
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	printf("密码为");
	putchar(c1);                            //putchar函数输出结果
	putchar(c2);                            //putchar函数输出结果
	putchar(c3);                            //putchar函数输出结果
	putchar(c4);                            //putchar函数输出结果
	putchar(c5);                            //putchar函数输出结果
	putchar('\n');                          //换行
	printf("密码为%c%c%c%c%c\n",c1,c2,c3,c4,c5);//printf函数输出结果
	return 0;                               
}                       
