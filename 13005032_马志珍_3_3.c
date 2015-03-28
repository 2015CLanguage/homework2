Enter file contents here
#include<stdio.h>
#include <math.h>
int main()
{
double m,d=300000,p=6000,r=0.01;
m=(log(p)-log(p-d*r))/log(1+r);
printf("还清月数=%.2f",m);
return 0;
}
