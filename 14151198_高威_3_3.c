#include <stdio.h>
#include <math.h>

int main()
{
	double d = 300000,p = 6000,r = 0.01,m;
	m = log(p/ (p-d*r) );
	m = m / log( 1+r );
	printf("m = %.1f\n",m);
    return 0;
}
