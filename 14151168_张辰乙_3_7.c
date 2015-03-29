#include<stdio.h> 
#include<math.h> 
 
 
#define PI 3.1415926 
 
 
int main() 
{ 
	   float r; 
 	   int h; 
 	   double c,s,a,v1,v2; 
 	   printf("请输入圆半径r,圆柱高h:"); 
 	   scanf("%f,%d",&r,&h); 
	   c=2*PI*r; 
 	   s=PI*r*r; 
 	   a=4*PI*r*r; 
 	   v1=4*PI*pow(r,3)/3; 
 	   v2=s*h; 
 	   printf("圆周长为：%5.2f\n",c); 
 	   printf("圆面积为：%5.2f\n",s); 
 	   printf("圆球表面积为：%5.2f\n",a); 
 	   printf("圆球体积为：%5.2f\n",v1); 
           printf("圆柱体积为：%5.2f\n",v2); 
 	   return 0; 
 	   } 
