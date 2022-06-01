#include <stdio.h>
#include <math.h>
double fx(float x)
{
    return ((3 * x) - cos(x) - 1);
}
double gx(float x)
{
    return (3 + sin(x));
}
int main()
{
    float x0, n, x1 = 0.0;
    printf("Enter the values of x0 and n:-");
    scanf("%f %f", &x0, &n);
    if (gx(x0) == 0)
        printf("Error.");
    else
    {
        int i;
        for (i = 1; i <= n; i++)
        {
            x1 = x0 - (fx(x0) / gx(x0));
            if (fabs(fx(x1)) > 0.001)
                x1 = x0;
        }
        printf("The root is:-%f", x1);
    }
    return 0;
}