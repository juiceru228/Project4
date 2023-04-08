#include "ploshad.h"
#include <stdio.h>
#include <math.h>
void ploshad() {
	extern float a;
	extern float b;
	extern float c;
	extern float P;
	extern float p;
	extern float s;
	p = P / 2;
	s = sqrt((p*(p - a)*(p - b)*(p - c)));
	printf("S: %f\n", s);
}
