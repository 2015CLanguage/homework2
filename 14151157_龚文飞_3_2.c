#include"stdio.h"
#include"math.h"
void main()
{
	float p0, p1, p2, p3, p4, p5, r0, r1, r2, r3, r5;    //定义各变量
	p0 = 1000, r0 = 0.0072, r1 = 0.0414, r2 = 0.0468, r3 = 0.054, r5 = 0.0585;
	p1 = p0*(1 + 5 * r5);                                //方案一本息和
	p2 = p0*(1 + 2 * r2)*(1 + 3 * r3);                   //方案二本息和
	p3 = p0*(1 + 3 * r3)*(1 + 2 * r2);                   //方案三本息和
	p4 = p0*pow(1 + r1, 5);                              //方案四本息和
	p5 = p0*pow(1 + r0 / 4, 4 * 5);                      //方案五本息和
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n", p1, p2, p3, p4, p5);  //输出各种方案的本息和
}
