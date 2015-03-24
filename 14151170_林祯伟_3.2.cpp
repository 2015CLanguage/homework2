#include <stdio.h>
#include <math.h>

int main()
{
    float p5,p23,p32,pn1,ph;
    float pn,ph1j,ph1n;

    p5=1000*(1+5*0.0585);
    p23=(1000*(1+2*0.0468))*(1+3*0.054);
    p32=(1000*(1+3*0.054))*(1+2*0.0468);

    pn=1+0.0414;
    pn1=1000.0*pn*pn*pn*pn*pn;

    ph1j=1+0.0072/4;
    ph1n=ph1j*ph1j*ph1j*ph1j;
    ph=1000.0*ph1n*ph1n*ph1n*ph1n*ph1n;

    printf("一次存五年期所得本息：%.2f\n",p5);
    printf("先存两年再存三年所得本息：%.2f\n",p23);
    printf("先存三年再存两年所得本息：%.2f\n",p32);
    printf("连续存五次一年期所得本息：%.2f\n",pn1);
    printf("活期存款所得本息：%.2f\n",ph);
    return 0;
}
