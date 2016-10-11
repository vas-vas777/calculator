#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int sum(int x, int y)
{
	return (x + y);
}
int mult(int x, int y)
{    
	return (x*y);
}
int dev(int x, int y)
{    
	return(x/y);
}
unsigned int pow( unsigned int x)
{  
	int p=1, i,b=5;
	for (i = 1; i <= b; i++) 
	p = x*p;
	return(p);
	
}
int sub(int x, int y)
{
	return(x-y); 
}
float sqrt(float x1) 
{
	float S = x1, aa = 1, bb = x1;
	while (fabs(aa - bb)>0.1)   
	{ 
	aa = (aa + bb) / 2;
	bb = S / aa; 
	}
	return (aa + bb) / 2;
}



int main() 
{
int a=10, b=5,r,r2,r3,r4,r5;
float r6;
r=sum(a,b);   printf("r=%d",r);
r2=mult(a,b); printf("\nr2=%d",r2);
r3=dev(a,b);  printf("\nr3=%d",r3);
r4=pow(a);    printf("\nr4=%d",r4); 
r5=sub(a,b);  printf("\nr5=%d",r5);
r6=sqrt(a);   printf("\nr6=%.2f",r6);         
_getch();      
}
