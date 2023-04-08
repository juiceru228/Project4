#include <stdio.h>
#include <math.h>
#include "triangle.h"
#include <stdbool.h>


bool check(double a, double b, double c)
{
	if ((a + b > c &&
		b + c > a &&
		c + a > b))
	{
		return true;
	}
	else
	{
		return false;
	}
}

double perimetr(double a, double b, double c)
{
	return a + b + c;
}

double ploshad(double a, double b, double c, double P)
{	
	return sqrt((P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c)));
}
