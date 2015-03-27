#include "math.h" 
int main() 
{ 
  double d,p,r,m;
	d=300000,p=6000,r=0.01; 
 	m=(log(p/(p-d*r))/log(1+r)); 
	printf("%.1f月能还清\n",m); 
 	return 0; 
} 
