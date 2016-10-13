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
int pow(int a)
{  
	int p=1, i,b=3;
	for (i = 1; i <= b; i++) //вычисляет a в стпени b
	p = a*p;
	return(p);
	
}
int sub(int a, int b)
{
	return(a-b); // вычисляет разность 
}
int my_sqrt(int x)
{
    int x1 = 3;
	int a = 25;
	x = 0.5*(x1 + a / x1);
	while (x % 10 == 0)
		x = 0.5*(x + a / x);

	return(x);
}




int main() 
{
int a=25, b=3,r,r2,r3,r4,r5;
int r6;
r=sum(a,b);   printf("r=%d",r);
r2=mult(a,b); printf("\nr2=%d",r2);
r3=dev(a,b);  printf("\nr3=%d",r3);
r4=pow(a);    printf("\nr4=%d",r4); // выводим полученные результаты 
r5=sub(a,b);  printf("\nr5=%d",r5);
r6=my_sqrt(a);   printf("\nr6=%d",r6);         
_getch();      
}
