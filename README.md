# Numerical Integration

This is a quick implementation of a numerical integral solver in C. It uses a trapezoidal Riemann Sum with a specified number of bins. The function header looks like this:

```C
double numer_int(double (*func)(double), 
                 double lower, 
                 double upper, 
                 int n);
```
- `double (*func)(double)` A pointer to the function which is being integrated
- `double lower/upper` The lower and upper bounds of the integral
- `int n` The number of bins used in the Riemann Sum (higher `n` means more accuracy, but more computation)

## Testing

An integral of `f(x) = x*x` from 0 to 10 should yield `333.33`

```C
double x_squared(double x)
{
	return x*x;
}
....
printf("%f\n", numer_int(&x_squared, 0.0, 10.0, 100));

```

Running this yields:

```sh

$ gcc main.c src/numer_int.c 
$ ./a.out
333.350000
```

Close enough