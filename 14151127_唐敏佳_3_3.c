#include "math.h"

int main()
{
	double d=300000,p=6000,r=0.01,m;
	m=(log(p/(p-d*r))/log(1+r));
	printf("%.1f月能还清\n",m);
	return 0;
}
