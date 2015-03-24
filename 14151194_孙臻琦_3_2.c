#include <stdio.h>
#include <math.h>
int main()
{
	double a5,a3,a2,a1,a0,b1,b2,b3,b4,b5,m;
	m=1000;
    a5=0.0585;//五年定期利率	
	a3=0.054;//三年定期利率
	a2=0.0468;//二年定期利率
	a1=0.0414;//一年定期利率
	a0=0.0072;//活期利率
	b1=m*(1+a5*5);//五年定期本息和
	b2=m*(1+a2*2)*(1+a3*3);//先两年后三年本息和
	b3=m*(1+a3*3)*(1+a2*2);//先三年后两年本息和
	b4=m*pow((1+a1),5);//5次一年本息和
	b5=m*pow((1+a0/4),20);//活期本息和
	printf("b1=%f\n",b1);
	printf("b2=%f\n",b2);
	printf("b3=%f\n",b3);
	printf("b4=%f\n",b4);
	printf("b5=%f\n",b5);
	return 0;
}
