#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{
    float l,s1,s2,v1,v2,r,h;
    scanf("r=%f,h=%f",&r,&h);
    l=2*PI*r;
    s1=PI*r*r;
    s2=4*PI*r*r;
    v1=4/3*PI*r*r*r;
    v2=s1*h;
    printf("l=%f\ns1=%f\ns2=%f\nV1=%f\nv2=%f\n",l,s1,s2,v1,v2);
    return 0;
}
