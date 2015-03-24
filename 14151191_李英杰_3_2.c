#include<stdio.h>
#include<math.h>
int main()
{
    float b,m1,m2,m3,m5,m0,w1,w2,w3,w4,w5;
	b=1000;
	m1=0.0414;
    m2=0.0468;
	m3=0.054;
	m5=0.0585;
	m0=0.0072;
	w1=b*(1+5*m5);
	w2=b*(1+2*m2)*(1+3*m3);
	w3=b*(1+3*m3)*(1+2*m2);
	w4=b*pow(1+m1,5);
	w5=b*pow(1+m0/4,20);
	printf("w1=%f\n",w1);
	printf("w2=%f\n",w2);
	printf("w3=%f\n",w3);
	printf("w4=%f\n",w4);
	printf("w5=%f\n",w5);
	return 0;
}
