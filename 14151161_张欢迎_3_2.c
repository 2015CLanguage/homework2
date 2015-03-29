#include<stdio.h> 
#include<math.h> 
int main() 
{ 
float r1, r2, r3, r4, r5, P1, P2, P3, P4, P5; 
r1 = 0.0414; 
r2 = 0.0468; 
r3 = 0.054; 
r4 = 0.0585; 
r5 = 0.0072; 
11 	P1 = 1000 * (1 + 5 * r4); 
12 	P2 = 1000 * (1 + 2 * r2)*(1 + 3 * r3); 
13 	P3 = 1000 * (1 + 3 * r3)*(1 + 2 * r2); 
P4 = 1000 * pow((1 + r1), 5); 
P5 = 1000 * pow((1 + r5 / 4), 20); 
printf("第一种方案的本息和为%8.2f\n", P1); 
printf("第二种方案的本息和为%8.2f\n", P2); 
printf("第三种方案的本息和为%8.2f\n", P3); 
printf("第四种方案的本息和为%8.2f\n", P4); 
printf("第五种方案的本息和为%8.2f\n", P5); 
} 
 


 
   

Status
 API
 Training
 Shop
 Blog
 About
 
