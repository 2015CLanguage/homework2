#include <stdio.h>

int main()
{
    int a[6]={'C','h','i','n','a'};
	int i;
	for (i=0; i<5; i++)  printf("%c",a[i]+4);
	printf("\n");
	for (i=0; i<5; i++)  putchar(a[i]+4);
	putchar('\n');
    return 0;
}
