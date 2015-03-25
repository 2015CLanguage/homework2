# include<stdio.h>
# include<math.h>
  void main()
  {   
	  float r,h,c,s,sq,vq,vz,pi;
	  pi=3.1415;
	  scanf("%f%f",&r,&h);
	  c=2*pi*r;
	  s=pi*r*r;
	  sq=4*pi*r*r;
	  vq=4/3*pi*r*r*r;
	  vz=s*h;
	  printf("周长c=%.2f\n",c);
	  printf("圆面积s=%.2f\n",s);
      printf("圆球表面积sq=%.2f\n",sq);
      printf("圆球体积vq=%.2f\n",vq);
      printf("圆柱体积vz=%.2f\n",vz);
	 
 
	  

  }
