#include <stdio.h>
#include <math.h>

const double X = 1.0 / 3.0;

int main()
{
    int n = 0;
    double s = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        double powRes1 = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            powRes1 *= 2;
        }

        double powRes2 = 1;
        for (int j = 1; j <= 2 * i; j++)
        {
            powRes2 *= X;
        }

        double fact = 1;
        for (int j = 1; j <= 2 * i; j++)
        {
            fact *= j;
        }

        s += powRes1 * powRes2 / fact;
    }
    printf("Sinh^2(x) = %.7lf\n", s);
    printf("%d", 9 + 13 * n * n + 23 * n);
    return 0;
}