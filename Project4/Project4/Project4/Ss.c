#include <stdio.h>
#include "triangle.h"
#include <stdbool.h>



int main()
{
	bool l;
	double a, b, c;
	double P, s;
	printf("Enter the sides of the triangle: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	l = check(a, b, c);
	if (l == true)
	{
		P = perimetr(a, b, c);
		s = ploshad(a, b, c, P);
		printf("P = %lf\ns = %lf", P, s);
	}
	return 0;
}
