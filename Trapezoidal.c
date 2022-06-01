#include <stdio.h>
#include <math.h>
int main()
{
    float low = 0, high = 1;
    float h = (high - low) / 5;
    int i;
    float x[6], y[6], res = 0.0;
    for (i = 0; i <= 5; i++)
    {
        x[i] = low + i * h;
        y[i] = 1 / sqrt(1 + pow(x[i], 2));
    }
    // Applying the formula
    for (i = 1; i <= 4; i++)
        res += y[i];
    float sum = h / 2 * ((y[0] + y[5]) + (2 * res));
    printf("The value of the integral is %.5f.", sum);
    return 0;
}