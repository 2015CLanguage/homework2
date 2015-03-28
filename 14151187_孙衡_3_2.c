Enter file contents here
#include<stdio.h>
#include<math.h>
int main()
{fioat r1,r2,r3,r5,r,p1,p2,p3,p4,p5,p; //定义变量类型
p=1000;                                //为变量赋值 
r5=0.0585; 
r3=0.054; 
r2=0.0468; 
r1=0.0414; 
r=0.0072;  
p1=p*(1+5*r5);                         //计算各种方法的本息和 
p2=p*(1+2*r2)*(1+3*r3); 
p3=p*(1+3*r3)*(1+2*r2); 
p4=p*pow(1+r1,5); 
p5=p*pow(1+r0/4,4*5); 
 	 
printf("方法一的本息和为：%f\n",p1);    //输出结果 
printf("方法二的本息和为：%f\n",p2); 
printf("方法三的本息和为：%f\n",p3); 
printf("方法四的本息和为：%f\n",p4); 
printf("方法五的本息和为：%f\n",p5); 

return 0;
}
