#include "stdio.h" 
#include "math.h"  
int main() 
{ 
	double r,h,c,s,S,v,V,Pi=3.1415; 
	printf("请依次输入圆半径、圆柱高（米）并用逗号隔开：\n"); 
	scanf("%lf,%lf",&r,&h); 
	c=2*r*Pi; 
	s=Pi*r*r; 
	S=4*Pi*r*r; 
 	v=4/3*Pi*pow(r,3); 
 	V=s*h; 
	printf("圆周长为%.2f米\n",c); 
	printf("圆面积为%.2f平方米\n",s); 
	printf("圆球表面积为%.2f平方米\n",S); 
	printf("圆球体积为%.2f立方米\n",v); 
	printf("圆柱体体积为%.2f立方米\n",V); 
	return 0; 
} 
