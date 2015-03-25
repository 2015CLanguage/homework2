# include<stdio.h>
# include<math.h>
  void main()
  {
    
	float a,b,c,d,e,x,y1,y2,y3,y4,y5;
	x=1000.0;
	y1=0.0414;
	y2=0.0468;
	y3=0.054;
	y4=0.0585;
	y5=0.0072;
	a=x*(1+5*y4);
	b=(x*(1+2*y2))*(1+3*y3);
	c=(x*(1+3*y3))*(1+2*y2);
	d=x*pow(1+y1,5);
	e=x*pow(1+y5/4,20);
	printf("a=%f\n",a);
	printf("b=%f\n",b);
	printf("c=%f\n",c);
	printf("d=%f\n",d);
	printf("e=%f\n",e);

  }
