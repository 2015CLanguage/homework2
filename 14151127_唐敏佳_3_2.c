#include "math.h"

int main()
{
	double P1,P2,P3,P4,P5;
	double a=1000,n=5;
	P1=a*(1+n*5.85*0.01);
	P2=a*(1+2*4.68*0.01)*(1+(n-2)*5.4*0.01);
	P3=a*(1+3*5.4*0.01)*(1+(n-3)*4.68*0.01);
	P4=a*(pow(1+4.14*0.01,n));
	P5=a*(pow(1+0.72*0.01/4,4*n));
	printf("一次存5年期的本息和为%f元\n",P1);
	printf("现存2年期，到期后将本息再存3年期的本息和为元%f\n",P2);
	printf("现存3年期，到期后将本息再存2年期的本息和为%f元\n",P3);
	printf("存1年期，到期后将本息再存1年期，连续存5次的本息和为%f元\n",P4);
	printf("存活期存款的本息和为%f元\n",P5);
	return 0;
}
