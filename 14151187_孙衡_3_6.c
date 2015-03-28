Enter file contents here
#include<stdio.h> 
#include<math.h> 
int main() 
{
char a,b,c,d,e;//定义字符数据 
a='C'; 
b='h'; 
c='i'; 
d='n'; 
e='a'; 

char f,g,h,i,j;//改变字符码值 
f=a+4; 
g=b+4; 
h=c+4; 
i=d+4; 
j=e+4; 

putchar(f);//调用putchar输出字符 
putchar(g); 
putchar(h); 
putchar(i); 
putchar(j); 

printf("\n转换后的字符为:%c%c%c%c%c\n",f,g,h,i,j);//调用printf输出 

return 0;                      
} 
