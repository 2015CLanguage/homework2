#include<stdio.h>
void main()
{
	int i;
	char text[]="China";
	for(i=1;i<=4;i++)
		text[i]=text[i]+4;
	printf("The encoded password is ");
	puts(text);
}
