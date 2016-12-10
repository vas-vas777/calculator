float sum(float x, float y)
{
	return (x + y);
}
float mult(float x, float y)
{
	return (x*y);
}
float *dev(float x, float y)
{
	if (y)
        {
	float *s=new float;
	*s= x/y;
	return s;	
        }
	else
	return nullptr;
}
float sub(float x, float y)
{
	return(x - y);
}
float power (float x, float y)
{
	if (y==0)
		return 1;
	
	if (y<0)
	{
		 float s=1,t;
		 y=y*(-1);
		 for (int i=0; i<=y-1; i++)
		 {
			 s=s*x;
		 }
		 t=1./s;
		 return t;
	}
		      if (y>0)
		      {
      float b;
	b=1;
          for (int i = 0; i <= y-1; i++)
	  {
	         b = b * x;
          }
	return b;
		      }
}
float *sq(float x)
{
	 if (x==0)
		 return 0;
	if (x>0)
	{
		 float *s=new float;
	float div = 1;
	while (x > 0)
	{
		x -= div, div += 2;
		*s += x < 0 ? 0 : 1;
	}
		
	return s;
	}
	 if (x<0)
return nullptr;
}
