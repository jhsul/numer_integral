#include <stdio.h>

#include "include/numer_int.h"

double x_squared(double x)
{
	return x*x;
}

int main(int argc, char *argv[])
{
	printf("%f\n", numer_int(&x_squared, 0.0, 10.0, 100));
}