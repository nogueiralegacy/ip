#include <stdio.h>
#include <math.h>

int main()
{
    double quadradoDeN;
    double n = 1;
    double erro;
    scanf("%lf\n%lf", &quadradoDeN, &erro);
    do {
        n = (n + (quadradoDeN / n)) / 2;
        printf("r: %.9lf, err: %.9lf\n", n, fabs(quadradoDeN - n * n));
    } while (fabs(quadradoDeN - n * n) > erro);
    return 0;
}
