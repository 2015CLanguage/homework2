Enter file contents here
#include<stdio.h> 
#include<math.h> 
int main() 
{
float zc,mj, bmj,qtj,ztj;           //定义数据类型并赋值 
float r,h; 
float pi=3.14159; 

printf("输入半径和高度:\t");        //提示并接受输入 
scanf("%f,%f",&r,&h); 
zc=2*pi*r;                          //计算操作 
mj=pi*r*r; 
bmj=4*pi*r*r; 
qtj=3.0/4.0*pi*r*r*r; 
ztj=mj*h; 

printf("所求的圆周长为:\t%6.2f\n",zc);//按精度输出计算结果 
printf("所求的圆面积为:\t%6.2f\n",mj); 
printf("所求的表面积为:\t%6.2f\n",bmj); 
printf("所求的球体积为:\t%6.2f\n",qtj); 
printf("所求的柱体积为:\t%6.2f\n",ztj); 

return 0;
} 
