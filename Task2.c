#include <stdio.h>
#include <math.h>

const double X = 1.0 / 3.0;

int main()
{
	int n = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	double a = X * X;
	double s = a;

	for (int i = 2; i <= n; i++)
	{
		a *= (4.0 * X * X) / ((2 * i) * (2 * i - 1));
		s += a;
	}

	printf("Sinh^2(x) = %.7lf\n", s);
	printf("%d", 9 + 13 * n - 10);
	return 0;
}