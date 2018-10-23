#include "../include/numer_int.h"

double numer_int(double (*func)(double), double lower, double upper, int n)
{
	double sum = 0;
	double bin_width = (upper - lower)/((float) n);
	double left = lower;
	double right = lower + bin_width;
	for(; right <= upper; left += bin_width, right += bin_width)
	{
		sum += bin_width*(func(left)+func(right))/2;
	}
	return sum;
}