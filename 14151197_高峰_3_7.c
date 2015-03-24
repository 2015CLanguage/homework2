#include <stdio.h>
int main(){
	float r,h,pi=3.14,c,s,Vq,Sq,V;
	scanf("r=%f,h=%f",&r,&h);
	c=2*pi*r;
	s=pi*r*r;
	Sq=4*pi*r*r;
    Vq=0.75*pi*r*r*r; 
	V=s*h;
	printf("圆的周长是：\t%.2f\n",c);
	printf("圆的面积是：\t%.2f\n",s);
	printf("圆球的表面积是：%.2f\n",Sq);
	printf("圆球的体积是：\t%.2f\n",Vq);
	printf("圆柱的体积是：\t%.2f\n",V);
	return 0;
}
