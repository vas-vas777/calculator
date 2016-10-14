#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
int main() 
{
int a=25, b=3,r,r2,r3,r4,r5;
int r6;
r=sum(a,b);   printf("r=%d",r);
r2=mult(a,b); printf("\nr2=%d",r2);
r3=dev(a,b);  printf("\nr3=%d",r3);
r4=pow(a);    printf("\nr4=%d",r4); 
r5=sub(a,b);  printf("\nr5=%d",r5);
r6=my_sqrt(a);   printf("\nr6=%d",r6);         
_getch();      
}
