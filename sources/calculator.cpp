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
unsigned sqrt(double x)
{
	unsigned div = 1, rslt = 0;
	while (x > 0)
	{
		x -= div, div += 2;
		rslt += x < 0 ? 0 : 1;
	}
	return rslt;
}
