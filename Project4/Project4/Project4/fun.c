#include "fun.h"
#include <stdio.h>
void perimetr() 
{
	extern float a;
	extern float b;
	extern float c;
	extern float P;
	
	P = a + b + c;
	printf("P: %f\n", P);
}
