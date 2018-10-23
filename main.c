#include <stdio.h>

#include "include/numer_int.h"

double my_function(double x)
{
	return x*x;
}

double x_cubed(double x)
{
	return x*x*x;
}

int main(int argc, char *argv[])
{
	printf("%f\n", numer_int(&x_cubed, 0.0, 10.0, 100));
}