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
	return(x / y);
}
int pow(int x, int y)
{
	int p = 1, i;
	for (i = 1; i <= y; i++) 
	{
		p = p*x;
	}
	return(p);
}
int sub(int x, int y)
{
	return(x - y); 
}
float sq(float x)
{
	float s=x,a=1,b=x;
	while (fabs(a-b) > 0.0000000001)
	{
		a=(a+b)/2;
		b=S/a;
	}
	return (a+b)/2;
}
