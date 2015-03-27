#include <stdio.h>
#include <math.h>

int main()
{
    float m,d,p,r;
	  d=300000;
	  p=6000;
	  r=0.01;
	  m=(log10(p)-log10(p-d*r))/log10(1+r);
	  printf("m=%8.1f\n",m);
	  return 0;
}
