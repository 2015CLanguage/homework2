#include<stdio.h>     
#define Pi 3.1416      
#include <math.h>
int main()     
{      
	float r,h,c,s,S,v,V;
	printf('圆半径r,圆柱高h:');
	scanf("%f,%f",&r,&h);
	c=2*Pi*r;
	s=Pi*pow(r,2);
	S=4*Pi*pow(r,2);
	v=(4.0/3)*Pi*pow(r,3);
	V=Pi*h*pow(r,2);
	printf("圆周长:%.2f\n圆面积:%.2f\n圆球表面积:%.2f\n圆球体积:%.2f\n圆柱体积:%.2f\n",c,s,S,v,V);
	return 0;                      
}
