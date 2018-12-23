//A simple program the computes the square root of a number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunction.h"
#endif

int main (int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stdout,"%s Version %d.%d\n",
				argv[0],
				Tutorial_VERSION_MAJOR,
				Tutorial_VERSION_MINOR);
		fprintf(stdout,"Usage: %s number\n",argv[0]);
		return 1;
	}
	double inputValue = atof(argv[1]);

#ifdef USE_MYMATH
	double outputValue = mysqrt(inputValue);
	printf("Use mymath function!\n");
#else
	double outputValue = sqrt(inputValue);
	printf("Use default function!\n");
#endif

	
	fprintf(stdout,"The square root of %g is %g\n",
			inputValue, outputValue);

#if defined (HAVE_LOG) && defined (HAVE_EXP)
	double outputValue2=logexp(inputValue);
	printf("The logexp of %g is %g\n",inputValue,outputValue2);
#else
	printf("The logexp is not defined!\n");
#endif
	return 0;
}
