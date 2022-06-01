#include <stdio.h>
#include <math.h>
int main()
{
    float low = 0, high = 1, x[6], y[6], h = (high - low) / 5;
    int i;
    for (i = 0; i <= 5; i++)
    {
        x[i] = low + i * h;
        y[i] = pow(x[i], 3);
    }
    // Applying Formula
    float res = 0, sum = 0;
    for (int i = 1; i <= 4; i++)
        res += y[i];
    sum = h / 2 * ((y[0] + y[5]) + (2 * res));
    printf("Result of the integral would be %.5f", sum);
    return 0;
}