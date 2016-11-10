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
float sub(float x, float y)
{
	return(x - y);
}
float pow ( float a )
{
	unsigned int s = 2;
	float a2 = a;
	
	if ( s != 0 ) 
	{
			for (int i = 1; i < s; i++)
		{
			a = a * a2;
		}
	}
		else a = 1.0;
	
	return (float) a;
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
