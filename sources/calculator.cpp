float sum(float x, float y)
{
	return (x + y);
}
float mult(float x, float y)
{
	return (x*y);
}
float dev(float x, float y)
{
	return(x / y);
}
float pow(float x, float y)
{
	float p = 1, i;
	for (i = 1; i <= y; i++) 
	{
		p = p*x;
	}
	return(p);
}
float sq(float x)
{
	unsigned int div = 1, rslt = 0;
	while (x > 0)
	{
		x -= div, div += 2;
		rslt += x < 0 ? 0 : 1;
	}
	return rslt;
}
