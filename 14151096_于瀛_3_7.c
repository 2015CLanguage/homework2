#include <stdio.h>
#define PI 3.14159
int main()
{
  float r=1.5,h=3.;
  folat c,s,Ss,Vs,Vp;
  c=2.*PI*r;
  s=PI*r*r;
  Ss=4.*s;
  Vs=4./3*PI*r*r*r;
  Vp=s*h;
  printf("圆周长c=%4.2f\n圆面积s=%4.2f\n球表面积Ss=%4.2f\n球体积Vs=%4.2f\n柱体体积Vp=%4.2f\n",c,s,Ss,Vs,Vp);
  return 0;
}
