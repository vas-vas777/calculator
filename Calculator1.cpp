#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int sum(int a, int b)
{
	return (a + b);// считает сумму
}
int mult(int a, int b)
{    
	return (a*b);// считает произведение
}
int dev(int a, int b)
{    
	return(a/b);// считает деление 
}
unsigned int pow( unsigned int a)
{  
	int p=1, i,b=5;
	for (i = 1; i <= b; i++) //вычисляет a в стпени b
	p = a*p;
	return(p);
	
}
int sub(int a, int b)
{
	return(a-b); // вычисляет разность 
}
float sqrt(float x1) 
{
	float S = x1, a = 1, b = x1;
	while (fabs(a - b)>0.1)  // квадратный корень из числа 
	{ 
	a = (a + b) / 2;
	b = S / a; 
	}
	return (a + b) / 2;
}



int main() 
{
int a=10, b=5,r,r2,r3,r4,r5;
float r6,r7;
r=sum(a,b);   printf("r=%d",r);
r2=mult(a,b); printf("\nr2=%d",r2);
r3=dev(a,b);  printf("\nr3=%d",r3);
r4=pow(a);    printf("\nr4=%d",r4); // выводим полученные результаты 
r5=sub(a,b);  printf("\nr5=%d",r5);
r6=sqrt(a);   printf("\nr6=%.2f",r6);         
getchar();      
}