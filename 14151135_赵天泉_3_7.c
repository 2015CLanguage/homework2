#include<stdio.h>
#include<math.h>

int main()
{
	
	float r,h,l,s,sq,vq,v,pi;
	pi=3.14;
	printf("ÊäÈë°ë¾¶r,¸ßh:");
	scanf("%f,%f",&r,&h);
	l=2*pi*r;
	s=pi*r*r;
	sq=4*pi*r*r;
	vq=4.0/3.0*pi*r*r*r;
	v=pi*r*r*h;
	printf("s=%.3f\n",s);
    printf("sq=%.3f\n",sq);
    printf("l=%.3f\n",l);
    printf("vq=%.3f\n",vq);
    printf("v=%.3f\n",v);
	return 0;
}
