# include<stdio.h>
# include<math.h>
int main(){

   float r,h,c,s1,s2,v1,v2;
   float pi=3.141526;
   printf("r=");
   scanf("%f",&r);
   printf("h=");
   scanf("%f",&h);
   c=2*pi*r;
   s1=pi*r*r;
   s2=4*pi*r*r;
   v1=(3.0/4.0)*pi*r*r*r;
   v2=s1*h;
   printf("圆周长为%6.2f\n",c);
   printf("圆面积为%6.2f\n",s1);
   printf("圆球表面积为%6.2f\n",s2);
   printf("圆球体积为%6.2f\n",v1);
   printf("圆柱体积为%6.2f\n",v2);
   return 0;
   
}
