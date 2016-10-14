int sum(int a, int b)
{
	return (a + b);
}
int mult(int a, int b)
{    
	return (a*b);
}
int dev(int a, int b)
{    
	return(a/b); 
}
int pow(int a)
{  
	int p=1, i,b=3;
	for (i = 1; i <= b; i++)
	p = a*p;
	return(p);
	
}
int sub(int a, int b)
{
	return(a-b); 
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

