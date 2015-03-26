#include<stdio.h>
#include<math.h>
int main()
{
	float x, n, r, a, b, c, d, e;
	x = 1000;
	n = 5;
	a = x*(1 + n*0.0585);
	b = x*(1 + 2 * 0.0468)*(1 + 3 * 0.0540);
	c = x*(1 + 3 * 0.0540)*(1 + 2 * 0.0468);
	d = pow(1.0414, 5)*x;
	e = pow((1 + 0.0072 / 4), 20)*x;
	printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n", a, b, c, d, e);
	return 0;
}
