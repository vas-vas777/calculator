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
	return float(x / y);
}
float sub(float x, float y)
{
	return(x - y);
}
float pow ( float x )
{
	unsigned int s = 2;
	float a2 = x;
	
	if ( s != 0 ) 
	{
			for (int i = 1; i < s; i++)
		{
			x = x * a2;
		}
	}
		else x = 1.0;
	
	return (float) x;
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
