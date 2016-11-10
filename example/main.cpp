#include<stdio.h>
#include<stdlib.h> 

#include<calculator.hpp>

int main()
{
	float a, b, r, r2, r3,r4, r5;
	printf_s("a="); scanf_s("%f", &a);
	printf_s("b="); scanf_s("%f", &b);
	float r6;
	r = sum(a, b);   printf_s("r=%f", r);
	r2 = mult(a, b); printf_s("\nr2=%f", r2);
	r3 = dev(a, b);  printf_s("\nr3=%f", r3);
	r4 = pow(a);    printf_s("\nr4=%f", r4); 
	r5 = sub(a, b);  printf_s("\nr5=%f", r5);
	r6 = sq(a);   printf_s("\nr6=%f", r6);
	system("pause");
}
