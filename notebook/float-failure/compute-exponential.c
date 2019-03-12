#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double const epsilon = 1e-40;

/* compute (x)^n / n! */
double compute_exp_taylor_elt(double x, int k)
{
	double elt = 1.0;
	int q = 0;

	for (q = 1; q <= k; q++)
	{
		elt = x * elt / q;
	}
	return elt;
}

double approx_exp_increasing(double x, int n)
{
	int k = 0;
	double res = 0.0;
	for (k = 0; k < n; k++)
	{
		res = res + compute_exp_taylor_elt(x, k);
	}
	return res;
}

double approx_exp_decreasing(double x, int n)
{
	int k = 0;
	double res = 0.0;
	for (k = n - 1; k >= 0; k--)
	{
		res = res + compute_exp_taylor_elt(x, k);
	}
	return res;
}

int main(void)
{
	const int nMax = 10000;
	double x0 = 1.0;
	double res1 = 0.0;
	double res2 = 0.0;
	int n = 0;

	for (n = 0; n < nMax; n++)
	{
		res1 = approx_exp_increasing(x0, n);
		res2 = approx_exp_decreasing(x0, n);
		printf("n = %d Delta = %40.40le\n", n,
			   fabs((res1 - res2) / (res1 + res2 + epsilon * epsilon)));
	}

	printf("res1 = %10.20g\n", res1);
	printf("res2 = %10.20g\n", res2);
	printf("n = %d Delta = %40.40le\n", n,
		   fabs((res1 - res2) / (res1 + res2 + epsilon * epsilon)));

	return EXIT_SUCCESS;
}
