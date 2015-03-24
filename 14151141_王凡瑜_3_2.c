#include<stdio.h>
#include<math.h>
int main()
{
    double i[]={0.0072,0.0414,0.0468,0.054,0.0585};
	double s[6];
	s[0]=1000;

	s[1]=s[0]*(1+i[4]*5);
	s[2]=s[0]*(1+2*i[2])*(1+3*i[3]);
	s[3]=s[0]*(1+3*i[3])*(1+2*i[2]);
	s[4]=s[0]*pow(1+i[1],5);
	s[5]=s[0]*pow(1+i[0]/4,4*5);
	
	int n;
	for(n=1;n<=5;n++)
		{
		printf("The Sum of the principal and interest according to Plan%d is %10.2f\n",n,s[n]);
		}
	
	return 0;
}
