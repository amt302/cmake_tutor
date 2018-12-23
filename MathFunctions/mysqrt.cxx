#include "TutorialConfig.h"
#include "MathFunction.h"

float mysqrt(float x)
{
	float xhalf = 0.5f * x;   
	int i = *(int*)&x;  
	i = 0x5f375a86 - (i>>1);   
	x = *(float*)&i; 
	x = x*(1.5f-xhalf*x*x);    
	x = x*(1.5f-xhalf*x*x); 
	x = x*(1.5f-xhalf*x*x); 
	return 1/x;
}

float logexp(float x)
{
	
	float result;
	// if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
	result= exp(log(x)*0.5);

#else // otherwise use an iterative approach
	result =0;
#endif
	return  result;
}
