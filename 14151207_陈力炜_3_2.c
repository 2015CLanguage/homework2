# include<stdio.h>
# include<math.h>
int main()
{   float a,b,c,d,e,x1,x2,x3,x5;
    x1=0.0414;
	x2=0.0468;
	x3=0.054;
    x5=0.0585;
	a=1000*(1+5*x5);
	b=1000*(1+2*x2)*(1+3*x3);
	c=1000*(1+3*x3)*(1+2*x2);
    d=pow(1+x1,5)*1000;
	e=1000*pow(1+0.0072/4,20);
	printf("第一种可得%f\n",a);
	printf("第二种可得%f\n",b);
	printf("第三种可得%f\n",c);
	printf("第四种可得%f\n",d);
	printf("第五种可得%f\n",e);
    return 0;
}
